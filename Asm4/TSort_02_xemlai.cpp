
#include <iostream>
#include <climits>
#define MAXN 150000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void merge(int input[], int from, int middle, int to) {
    int n1 = middle - from + 1;
    int n2 = to - middle;

    int left[n1], right[n2];

    for (int i = 0; i < n1; i++)
        left[i] = input[from + i];
    for (int j = 0; j < n2; j++)
        right[j] = input[middle + 1 + j];

    int i = 0, j = 0, k = from;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            input[k++] = left[i++];
        } else {
            input[k++] = right[j++];
        }
    }

    while (i < n1) {
        input[k++] = left[i++];
    }

    while (j < n2) {
        input[k++] = right[j++];
    }
}

void mergeSortRange(int input[], int from, int to) {
    if (from < to) {
        int middle = (from + to) / 2;
        mergeSortRange(input, from, middle);
        mergeSortRange(input, middle + 1, to);
        merge(input, from, middle, to);
    }
}

void mergeSort(int input[], int n) {
    mergeSortRange(input, 0, n - 1);
}

void XuatMang(int A[], const int &N) {
    // std::cout << is_ascending(A, N) << std::endl;
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}


int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    mergeSort(a, n);

    XuatMang(a, n);

    return 0;
}
