
#include <iostream>
using namespace std;
#define MAXN 400000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

int binary_search_greatestLesser_last_occurrence(int a[], int n, int x){
    int l=0; int r=n-1;
    int index=-1;
    while (l<=r){
        int mid=(l+r)/2;
        if (a[mid]<x){
            index= mid;
            l=mid+1;
        } 
        else 
        {
            r=  mid -1;
        }
    }
    return index;
}

int main() {
    int x, n, a[MAXN];

    cin >> x;
    cin >> n;
    NhapMang(a, n);

    cout << binary_search_greatestLesser_last_occurrence(a, n, x);

    return 0;
}


