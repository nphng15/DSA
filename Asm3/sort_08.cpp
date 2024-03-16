#include<iostream>
#define MAXN 101
using namespace std;


void NhapMang(int A[], int &n){
    std::cin>>n;
    for (int i=0; i<n; i++){
        std::cin>>A[i];
    }
}

void SapXepSoAmTangDan(int A[], int &n){
    for (int i=0; i<n-1; i++){
        int min;
        if (A[i]<0){
            min=i;
            for (int j=i+1; j<n; j++){
                if (A[j]<0 && A[j]<A[min])
                min=j;
            }
            std::swap(A[i],A[min]);
        }
    }
}




void XuatMang(int A[], int N) {
    for (int i = 0; i < N; i++)
        std::cout << A[i] << '\t';
}
int main() {
    int a[MAXN], n;
    NhapMang(a, n);
    SapXepSoAmTangDan(a, n);
    XuatMang(a, n);
    return 0;
}
