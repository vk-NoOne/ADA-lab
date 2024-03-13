#include<iostream>
using namespace std;
int n;
void floyd(int a[20][20]){
    for(int k = 0; k<n;k++)
        for(int i=0; i<n; i++)
            for(int j=0; j< n; j++)
                if(a[i][j] > a[i][k] + a[k][j])
                    a[i][j] = a[i][k] + a[k][j];
    cout<<"\nShortest path matrix: ";
    for(int i=0; i<n; i++){
        for(int j=0; j< n; j++)
            cout<<a[i][j]<<"  ";
        cout<<endl;
    }

}

int main(){

    cout<<"No of vertices: ";
    cin>>n;
    int a[20][20];
    cout<<"Enter cost matrix: ";
    for(int i=0; i<n; i++)
        for(int j=0; j< n; j++)
            cin>>a[i][j];
    floyd(a);

}
