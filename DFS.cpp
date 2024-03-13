#include<iostream>
using namespace std;

int a[20][20], visited[20], n, v;

void DFS(int v){
    visited[v] = 1;
    for(int i = 1; i<=n; i++){
        if(a[v][i] && !visited[i]){
            cout<<"-->"<<i;
            visited[i] = 1;
            DFS(i);
        }
    }
}


int main(){
    int count = 0;
    cout<<"Enter number of vertices: ";
    cin>>n;
    for(int i = 1; i<=n; i++){
        visited[i] = 0;
        for(int j = 1; j<=n; j++)
            a[i][j] = 0;
    }

    cout<<"\nEnter adjacency matrix: ";
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            cin>>a[i][j];

    cout<<"\nEnter starting vertex: ";
    cin>>v;

    cout<<"\n DFS travesal: "<<endl;
    cout<<v;

    DFS(v);

    for(int i = 1; i<=n; i++)
        if(visited[i])
            count++;
    if(count == n)
        cout<<"\nGraph is connected";
    else
        cout<<"\nDisconnected";
    return 0;
}
