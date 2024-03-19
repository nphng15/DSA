
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
void Output(vector<int> A){
	for (int i=0; i<A.size(); i++){
		cout<<A[i]<<"\t";
}
}
void QuickSort(vector<int> &A, int left, int right){
	
	int pivot=A[(left+right)/2];
	int i=left;
	int j=right;
	while(i<j){
		while (A[i]<pivot) i++;
		while (A[j]>pivot) j--;
		
		if (i<=j){
			swap(A[i],A[j]);
			i++;
			j--;
		}
	}

	if (left<j) QuickSort(A,left,j);
	if (i<right) QuickSort(A,i,right);
	//xem lai
	if (left == 0 && right == A.size() - 1) {
        Output(A);
    }	
}

int main() {
	vector<int> A;
	Input(A);
	QuickSort(A,0,A.size()-1);
	return 0;
}
