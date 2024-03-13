#include<iostream>
using namespace std;

int c[20][20], parent[20], n, a, b;

void findMin(){

    int min = 99;
    for(int i = 1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            if(c[i][j] < min){
                min = c[i][j];
                a = i;
                b = j;
            }

}

int checkCycle(int a, int b){

    if(parent[a] == parent[b] && parent[a] != 0)
        return 0;
    else
        if(parent[a] == 0 && parent[b] == 0)
            parent[a] = parent[b] = a;
        else
            if(parent[a] == 0)
                parent[a] = parent[b];
            else
                if(parent[a] != parent[b])
                    parent[b] = parent[a];
    return 1;
}







int main(){

    int count = 0, cost = 0, min, flag = 0;
    cout<<"Enter number of vertices: ";
    cin>>n;
    cout<<"Enter cost matrix: ";
    for(int i=1; i<=n; i++){
        parent[i] = 0;
        for(int j=1; j<=n; j++)
            cin>>c[i][j];
    }

    while(count != n-1 && min != 99){
        findMin();
        flag = checkCycle(a, b);
        if(flag == 1){
            cout<<a<<"-->"<<b<<"="<<c[a][b]<<endl;
            cost = cost + c[a][b];
            count++;
        }
        c[a][b] = c[b][a] = 99;
    }
    cout<<"Total cost: "<<cost;
    return 0;

}
