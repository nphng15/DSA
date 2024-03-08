
#include <iostream>
using namespace std;
#define MAXN 400000

void NhapMang(int A[], const int N) {
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

bool binary_search(int a[], int l, int r, int &x){
    if (l<=r){
    int m=(l+r)/2;
    if (a[m]==x) return 1; 
    if (x>a[m]) return binary_search(a, m+1, r, x);
     return binary_search(a, l, m-1, x);
    }
    return 0;
}

int main() {
    int x, n, a[MAXN];

    cin >> x;
    cin >> n;
    NhapMang(a, n);

    cout << boolalpha << binary_search(a, 0, n-1, x);

    return 0;
}
