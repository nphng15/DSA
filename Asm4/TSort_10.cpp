
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
	int left= 2*i+1;
	int right= 2*i+2;
	int smallest= i;

	if (left<n && A[left]<A[smallest]) smallest=left;
	if (right<n && A[right]<A[smallest]) smallest=right;

	if(smallest!=i) {
		swap(A[i],A[smallest]);
		Heapify(A,n,smallest);
	}
}

void Sort(vector<int> &A){
	int n=A.size();
	for (int i=n/2-1; i>=0; i--){
		Heapify(A,n,i);
	}
	for (int j=n-1; j>=1; j--){
		cout<<"N="<<j+1<<endl;
		swap(A[0],A[j]);
		for (int i=0; i<n; i++){
			cout<<A[i]<<" ";
		}
		cout<<endl;
		Heapify(A,j,0);
	}
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}
