#include<iostream>
using namespace std;

void heapify(int A[], int n, int i){
    int lar = i;
    int L = 2 * i + 1;
    int R = 2 * i + 2;
    if(L < n && A[lar] < A[L])
        lar = L;
    if(R < n && A[lar] < A[R])
        lar = R;
    if(lar != i){
        swap(A[lar], A[i]);
        heapify(A, n, lar);
    }
}

void heapSort(int A[], int n){
    for(int i = n/2-1; i>=0; i--)
        heapify(A, n, i);
    for(int i = n-1; i>=0; i--){
        swap(A[0], A[i]);
        heapify(A, i, 0);
    }


}


int main(){
    int n;
    cout<<"Enter number of student: ";
    cin>>n;
    int A[n];
    cout<<"\nEnter student id's: ";
    for(int i = 0; i<n; i++)
        cin>>A[i];
    heapSort(A, n);
    cout<<"\nElements after sorting: ";
    for(int i = 0; i<n; i++)
        cout<<A[i]<<"\t";
}
