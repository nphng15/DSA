
#include <iostream>

using namespace std;

bool binary_search (int a[], int l, int r, int &x){
    while (l<=r){
        int m=(l+r)/2;
        if (a[m]==x) return 1;
        if (x>a[m]) return binary_search(a,l,m-1,x);
        return binary_search(a,m+1,r,x);
    }
    return 0;
}

int main() {
    int x; cin >> x;
    int n; cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << std::boolalpha << binary_search(a, 0, n-1, x);

    return 0;
}
