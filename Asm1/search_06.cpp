
#include <iostream>
using namespace std;
#define MAXN 400000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

int binary_search_first_occurrence(int a[],int n,int x){
    for (int i=0; i<n; i++){
        if (a[i]==x) return i;
    }
    return -1;
}

int main() {
    int x, n, a[MAXN];

    cin >> x;
    cin >> n;
    NhapMang(a, n);

    cout << binary_search_first_occurrence(a, n, x);

    return 0;
}


