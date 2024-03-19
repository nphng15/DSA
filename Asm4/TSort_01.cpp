#include <iostream>
#define MAXN 200000

void NhapMang(int A[], int &N) {
    std::cin >> N;
    for (int i = 0; i < N; i++)
        std::cin >> A[i];
}

void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
}

void Heapify(int a[], int heapSize, int i){
    int left=2*i+1;
    int right=2*i+2;
    int max=i;

    if (left<heapSize && a[left]>a[max])   max=left;
    if (right<heapSize && a[right]>a[max])   max=right;
    if (max!=i){
        swap(a[i],a[max]);
        Heapify(a,heapSize,max);
    }
}

void buildHeap(int a[], int n){
    for (int i=n/2-1; i>=0; i--){
        Heapify(a,n,i);
    }
}

void HeapSort(int a[], int n) {
	int heapSize;
	heapSize = n;
	buildHeap(a, heapSize);
	for (int i = n - 1; i>0; i--) {
		swap(a[0], a[i]);
		heapSize -= 1;
		Heapify(a, heapSize, 0);
	}
}

void XuatMang(int A[], const int &N) {
    std::cout << N << std::endl;
    for (int i = 0; i < N; i++)
        std::cout << A[i] << " ";
}

int main() {
    int a[MAXN], n;

    NhapMang(a, n);

    HeapSort(a, n);

    XuatMang(a, n);

    return 0;
}


