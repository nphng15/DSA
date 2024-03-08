#include <iostream>
using namespace std;
#define MAXN 400000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}




int binary_search_leastGreater_firstOccurrence(int a[], int n, int x){
    int l=0; int r=n-1;
    int index=-1;
    while (l<=r){
        int m=(l+r)/2;
        if (a[m]>x){
            index=m;
            r=m-1;
        } else l=m+1;
       
    }
    return index;
}

int main(){
    int x, n, a[MAXN];

    cin >> x;
    cin >> n;
    NhapMang(a, n);

    cout << binary_search_leastGreater_firstOccurrence(a, n, x);

    return 0;
}