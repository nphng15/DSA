
#include<iostream>
#define MAXN 101
using namespace std;

int Input(){
    int n;
    cin>>n;
    return n;
}

bool checkEven(int n){
    if (n%2==0) return 1;
    return 0;
}

void NhapMang(int A[], int &n){
    for (int i=0; i<n; i++){
        std::cin>>A[i];
    }
}

void SapXepSoChanGiamDan(int A[], int &n){
    for (int i=0; i<n-1; i++){
        int max;
        if (checkEven(A[i])){
            max=i;
            for (int j=i+1; j<n; j++){
                if (checkEven(A[j]) && A[j]>A[max])
                max=j;
            }
            std::swap(A[i],A[max]);
        }
    }
}


void XuatMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << '\t';
}
int main() {
    int a[MAXN], n;
    n=Input();
    NhapMang(a, n);
    SapXepSoChanGiamDan(a, n);
    XuatMang(a, n);
    return 0;
}
