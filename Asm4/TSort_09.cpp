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
	int left=i*2+1;
	int right=i*2+2;
	int min=i;

	if (left<n && A[left]<A[min]) min=left;
	if (right<n && A[right]<A[min]) min=right;
	if (min!=i){
		swap(A[i],A[min]);
		Heapify(A,n,min);
	}
}

void Output(vector<int> &A){
	for (int i=0; i<A.size(); i++){
		cout<<A[i]<<"\t";
	}
}
void Sort(vector<int> &A){
	int n=A.size();
	for(int i=n/2-1; i>=0; i--){
		Heapify(A,n,i);
	}
	for(int j=n-1; j>=0; j--){
		swap(A[0],A[j]);
		Heapify(A,j,0);
	}
	Output(A);
}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}
