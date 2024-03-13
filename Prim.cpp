#include<iostream>
using namespace std;
 int c[20][20], visited[20], n;

 void prims(){

    int count=0, a, b, min, cost=0;
    visited[1] = 1;
    while(count < n-1){
        min = 99;
        for(int i=1; i<=n; i++)
            for(int j=1; j<=n; j++)
                if(visited[i] && !visited[j] && min >c[i][j]){
                    min = c[i][j];
                    a = i;
                    b = j;
        }
        cout<<a<<"-->"<<b<<"="<<c[a][b]<<endl;
        cost = cost + c[a][b];
        count++;
        visited[b] = 1;
    }
    cout<<"Total cost: "<<cost;

 }



 int main(){
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter cost matrix: ";
    for(int i=1; i<=n; i++){
        visited[i] = 0;
        for(int j=1; j<=n; j++)
            cin>>c[i][j];
    }
    prims();

    return 0;

 }
