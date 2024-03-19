
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

void Input(vector<int> &v)
{
	int tmp;
	cin >> tmp;
	while (tmp > 0) {
		v.push_back(tmp);
		cin >> tmp;
	}
}

void Heapify(vector<int> &A, int n, int i){
	int left=2*i+1;
	int right=2*i+2;
	int max=i;

	if (left<n && A[left]>A[max]) max=left;
	if (right<n && A[right]>A[max]) max=right;

	if (max!=i){
		swap(A[i],A[max]);
		Heapify(A,n,max);
	}

}

void Sort(vector<int> &A){
	int n=A.size();
	for(int j=n/2-1; j>=0; j--){
		Heapify(A,n,j);
	}
	for (int i=n-1; i>=1; i--){
		cout<<"N="<<i+1<<": swap "<<A[i]<<" - "<<A[0]<<endl;
		swap(A[0],A[i]);
		Heapify(A,i,0);
	}
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	for(int i=0; i<A.size(); i++){
		cout<<A[i]<<" ";
	}
	return 0;
}
