
#include <iostream>

using namespace std;

bool binary_search(int a[], int &n, int &x){
    for (int i =0; i<n; i++){
        if (a[i]==x) return 1;
    }
    return 0;
}

int main() {
    int x; cin >> x;
    int n; cin >> n;

    int *a = new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << std::boolalpha << binary_search(a, n, x);;

    return 0;
}

