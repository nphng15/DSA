#include<iostream>
#include<bits/stdc++.h>
#define MAXN 100000

bool is_ascending(int a[],int &n){
    for (int i=0; i<n; i++){
        if (a[i]>a[i+1]) return 0;
    }
    return 1;
}

void NhapMang(int a[], int &n){
    for (int i=0; i<n; i++){
        std::cin>>a[i];
    }
}

void selection_sort_ascending(int a[], int &n){
    int min;
    for (int i=0; i<n-1; i++){
        min = i;
        for (int j=i+1; j<n; j++){
            if (a[j]<a[min]){
            min = j;
            std::swap(a[i],a[j]);
            }
        }
    
    }

}
//template
int main() {
    int a[MAXN], n, x;

    std::cin >> x;

    NhapMang(a, x);

    selection_sort_ascending(a, x);

    std::cout << std::boolalpha << is_ascending(a, x);

    return 0;
}
