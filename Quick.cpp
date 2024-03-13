#include<iostream>
using namespace std;

int partition(int A[], int start, int end){
    int pivot = A[end];
    int i = start-1;
    for(int j = start; j < end; j++){
        if(A[j] < pivot){
            i++;
            swap(A[i], A[j]);
        }
    }
    i++;
    swap(A[i], A[end]);
    return i;
}

void quickSort(int A[], int start, int end){
    if(end <= start)
        return;
    int pivot = partition(A, start, end);
    quickSort(A, start, pivot - 1);
    quickSort(A, pivot + 1, end);
}


int main(){
    int n;
    cout<<"Enter number of files: ";
    cin>>n;
    int A[n];
    cout<<"\nEnter file id's: ";
    for(int i = 0; i<n; i++)
        cin>>A[i];
    cout<<"\nElements before swapping: ";
    for(int i = 0; i<n; i++)
        cout<<A[i]<<"\t";
    quickSort(A, 0, n-1);
    cout<<"\nElements after swapping: ";
    for(int i = 0; i<n; i++)
        cout<<A[i]<<"\t";
    return 0;

}
