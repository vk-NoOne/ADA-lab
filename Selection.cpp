#include<iostream>
using namespace std;

void SelectionSort(int a[], int n){
    int min;
    for(int i = 0; i < n-1; i++){
        min = i;
        for(int j = i+1; j < n; j++)
            if(a[j] < a[min])
                min = j;
        swap(a[i], a[min]);
}
}

int main(){
    int a[] = {8, 5, 1 , 6, 3, 2};
    int n = sizeof(a)/sizeof(a[0]);
    SelectionSort(a, n);
    cout<<"Sorted array: "<<endl;
    for(int i = 0; i < n; i++)
        cout<<a[i]<<"\t";
    return 0;
}
