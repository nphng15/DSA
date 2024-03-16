
#include <iostream>
#define MAXN 101
void XuatMang(int A[], int N)
{
    for (int i = 0; i < N; i++)
        std::cout << A[i] << '\t';
    std::cout << std::endl;
}

void NhapMang(int A[], int &n)
{
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        std::cin >> A[i];
    }
}

void SapXep(int A[], int n)
{
    int cuoi = n - 1;
    for (int k = 0; k < cuoi; k++)
    {

        if (A[k] == 0)
        {
            std::swap(A[k], A[cuoi]);
            cuoi--;
            k--;
        }
    }
    for (int i=0; i<n-1; i++){
        if (A[i]<0){
            for (int j=i+1; j<n; j++){
                if (A[j]>0) std::swap(A[i],A[j]);
            }
        }
    }
}

void SapXepSoDuongGiamAmTangVa0(int A[], int n)
{
    SapXep(A, n);
    for (int i=0; i<n-1; i++){
        if (A[i]>0){
            int max=i;
            for (int j=i+1; j<n; ++j){
                if (A[j]>0 && A[j]>A[max]) max=j;
            }
            std::swap (A[i],A[max]);
        } else  {
            int min=i;
            for (int k=i+1; k<n; ++k){
                if (A[k]<0 && A[k]<A[min]) min=k;
            }
            std::swap (A[i],A[min]);
        }
    }
}
int main()
{
    int a[MAXN], n;
    NhapMang(a, n);
    SapXepSoDuongGiamAmTangVa0(a, n);
    XuatMang(a, n);
    return 0;
}
