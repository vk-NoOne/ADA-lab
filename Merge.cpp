#include<iostream>
using namespace std;

void merge1(int L[], int R[], int A[], int nL, int nR){
    int i, j, k;
    i = j = k = 0;
    while(i < nL && j < nR){
        if(L[i] <= R[j]){
            A[k] = L[i];
            i++;
        }
        else{
            A[k] = R[j];
            j++;
        }
        k++;
    }
    while(i < nL){
        A[k] = L[i];
        i++;
        k++;
    }
    while(j < nR){
        A[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int A[], int n){
    if(n > 1){
        int mid = n / 2;
        int Left[mid], Right[n-mid];
        for(int i = 0; i<mid; i++)
            Left[i] = A[i];
        for(int i = mid; i<n; i++)
            Right[i - mid] = A[i];
        mergeSort(Left, mid);
        mergeSort(Right, n - mid);
        merge1(Left, Right, A, mid, n-mid);
    }
}

int main(){
    int n;
    cout<<"Enter number of files: ";
    cin>>n;
    int A[n];
    cout<<"\nEnter file id's: ";
    for(int i = 0; i<n; i++)
        cin>>A[i];
    cout<<"\nElements before sorting: ";
    for(int i = 0; i<n; i++)
        cout<<A[i]<<"\t";
    mergeSort(A, n);
    cout<<"\nElements after sorting: ";
    for(int i = 0; i<n; i++)
        cout<<A[i]<<"\t";
    return 0;

}
