#include<iostream>
using namespace std;

int c[20][20], d[20], s[20], n, v, u;

void dijkstra(){

    for(int i = 1; i<=n; i++){
        d[i] = c[v][i];
        s[i] = 0;
    }
    d[v] = 0;
    s[v] = 1;

    for(int k = 2; k<=n; k++){
        int min = 99;
        for(int i = 1; i<=n; i++){
            if(s[i] == 0 && min > d[i]){
                min = d[i];
                u = i;
            }
        }
        s[u] = 1;
        for(int i = 1; i<=n; i++){
            if(s[i] == 0){
                if(d[i] > d[u] + c[u][i])
                    d[i] = d[u] + c[u][i];
            }
        }
    }
    cout<<"\nDistance from source vertex "<<v<<" are"<<endl;
    for(int i = 1; i<=n; i++)
        cout<<v<<"-->"<<i<<"="<<d[i]<<endl;

}




int main(){
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter cost matrix: ";
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin>>c[i][j];
    cout<<"\nEnter source vertex: ";
    cin>>v;
    dijkstra();
    return 0;
}
