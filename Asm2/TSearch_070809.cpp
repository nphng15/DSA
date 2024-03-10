
#include <iostream>
#include <time.h>
#include <vector>
#include <algorithm>
using namespace std;

bool checkOdd(int n){
    if (n%2!=0) return 1;
    return 0;
}

void Input(vector<int> &A){
    while(true){
        int x;
        cin>>x;
        if (x==0) break;
        A.push_back(x);
    }

}

void linearSearch(vector<int> &A){
    int x;
    cin>>x;
    bool check=false;
    int temp;
    for (int i=0; i<A.size(); i++){
        if (A[i]==x && checkOdd(i)){
            cout<<i<<" ";
            check=true;
        }
    }
    
    if (!check) cout<<"No Find";

}

int main() {
	vector<int> A;
	Input(A);
	linearSearch(A);
	return 0;
}
