
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

void QuickSort(vector<int> &A, int left, int right, int &dem){
	
	int pivot = A[(left+right)/2]; 
	int i=left;
	int j=right;
	dem++;
	cout<<"Phan hoach doan left="<<left<<" - right="<<right<<" - pivot="<<pivot<<":"<<endl;
	while (i<j){
		while(A[i]<pivot) i++;
		while(A[j]>pivot) j--;
		
		if (i<=j){
			swap(A[i],A[j]);

			i++; j--;
		} 
	}
        for (int i=0; i<A.size(); i++){
       
        cout<<A[i]<<"\t";
    }
    cout<<endl;
    if (left<j){
			QuickSort(A,left,j,dem);
		}
		if (i<right){
			QuickSort(A,i,right,dem);
		}

}

void Sort(vector<int> &A){
	int left = 0;
	int right = A.size()-1;
	int dem=0;
	QuickSort(A,left,right,dem);

}

int main() {
	vector<int> A;
	Input(A);
	Sort(A);
	return 0;
}
