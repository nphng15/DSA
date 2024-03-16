
#include <iostream>
#define MAXN 30000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void insertionSort_sort_decending(int A[],int &n){
    for(int i=1; i<n; i++){
        int e=A[i]; int j;
        for(j=i-1; j>-1; j--){
            if (A[j]>e) break;
            A[j+1]=A[j];
        }
        A[j+1]=e;
    }
}


void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    insertionSort_sort_decending(a, n);

    XuatMang(a, n);

    return 0;
}
