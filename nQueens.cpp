#include<iostream>
using namespace std;

int x[100], n, count = 0;

int place(int k, int i){

    for(int j = 1; j<k; j++){
        if((x[j] == i) || (abs(x[j]-i) == abs(j - k)))
            return 0;
    }
    return 1;

}

void nQueens(int k, int n){

    for(int i = 1; i<=n; i++)
        if(place(k, i)){
            x[k] = i;
            if(k == n){
                count++;
                for(int j =1; j<=n; j++){
                    for(int p = 1; p <=n; p++)
                        if(x[j] == p)
                            cout<<"Q";
                        else
                            cout<<"0";
                    cout<<endl;
                }
            }
            else
                nQueens(k+1, n);
        }
        cout<<endl;

}

int main(){

    cout<<"Enter numebr of queens: ";
    cin>>n;
    nQueens(1, n);
    if(count == 0)
        cout<<"\nNo solution";
    else
        cout<<"\n"<<count<<" solutions are possible";
    return 0;

}
