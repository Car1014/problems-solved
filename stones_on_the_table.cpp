#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,conta=0;
    cin>>n;
    string a;
    cin>>a;

    if(a.size()==1)
    {
        cout<<0;
        return 0;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])
        {
            conta++;
        }
        if(i+2==n)
        {
            conta++;
        }
    }
    cout<<n-conta;

    return 0;

}
