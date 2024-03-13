#include<iostream>
#include<cstring>
using namespace std;

int const maxi = 256;
int ST[maxi];

void shiftTable(string p){
    int m = p.size();
    for(int i = 0; i<maxi; i++)
        ST[i] = m;
    for(int j = 0; j<m-1; j++)
        ST[p[j]] = m - 1 - j;
}

int horspool(string s, string p){
    int n = s.size();
    int m = p.size();
    shiftTable(p);
    int i = m - 1;
    while(i < n){
        int k = 0;
        while(k < m && p[m - 1 - k] == s[i - k])
            k++;
        if(k == m)
            return i-m+1;
        else
            i = i + ST[s[i]];
    }
    return -1;
}

int main(){

    string p, s;
    cout<<"Enter String: ";
    getline(cin, s);
    cout<<"\nEnter pattern: ";
    getline(cin, p);
    int pos = horspool(s, p);

    if(pos == -1)
        cout<<"\nNot found";
    else
        cout<<"\nFound at position: "<<pos<<endl;
    return 0;

}
