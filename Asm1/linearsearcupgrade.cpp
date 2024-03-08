
#include <iostream>

using namespace std;

bool binary_search(int a[],int l ,int r ,int &x){
    while (l<=r){
        if (a[l]==x)  return 1;
        l++;
    }
    return 0;
}

int main() {
    int x; cin >> x;
    int n; cin >> n;

    int *a=new int[n];

    for (int i = 0; i < n; i++)
        cin >> a[i];

    cout << std::boolalpha << binary_search(a, 0, n-1, x);;

    return 0;
}


