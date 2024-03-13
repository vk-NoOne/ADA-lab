#include<iostream>
using namespace std;

void InsertionSort(int a[], int n){
    int j, v;
    for(int i = 1; i < n; i++){
        v = a[i];
        j = i - 1;
        while(j >= 0&& a[j] > v){
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = v;
    }

}

int main(){
    int a[] = {8, 5, 1 , 6, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    InsertionSort(a, n);
    cout<<"Sorted array: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<a[i]<<"\t";
    return 0;
}
