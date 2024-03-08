
#include <iostream>
#define MAXN 400000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

int Sentinel_LinearSearch(int A[], int N, int X) {
    int last=A[N-1]; // Lưu lại giá trị cuối danh sách

    A[N-1]=X; // Đặt giá trị X vào cuối danh sách
    int i=0;
    if (X==last) return 1;
    while (i<N-1){
        
        if (A[i]==X){
            return 1;
        }
        i++;
    }


    return -1;
}

int main() {
    int a[MAXN], n, x;

    std::cin >> x;

    NhapMang(a, n);

    int i = Sentinel_LinearSearch(a, n, x);

    if (i==-1) std::cout << "false";
    else std::cout << "true";

    return 0;
}



