
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

void Sapxep(vector<int> &A){
    for (int i=0; i<A.size()-1; i++){
        for (int j=i+1; j<A.size(); j++){
            if (A[i]>A[j]) swap(A[i],A[j]);
        }
    }
    
}

void Input(vector<int> &A){
    while(true){
        int x;
        cin>>x;
        if (x==0) break;
        A.push_back(x);
    }
    Sapxep(A);

}

void binarySearch(vector<int> &A){
    int l=0; int r=A.size()-1;

    int x;
    cin>>x;

for (int i=0; i<A.size(); i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    int phandoan=0;
    while (l<=r){
        int m=(l+r)/2;
        phandoan++;
        cout<<"Left="<<l<<" "<<"Right="<<r<<"\t"<<"Mid="<<m<<endl;
        if (A[m]==x) {
            break;
        }
        else if (x>A[m]) {
            l=m+1;
            
        } else {
            r=m-1;

        }
        
    }
 
}

int main() {
	vector<int> A;
	Input(A);
	binarySearch(A);

   
	return 0;
}
