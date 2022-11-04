#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,conta=0;
    cin>>n;
    while(n--)
    {
        int arreglo[3],coro=0;
        for(int i=0;i<3;i++)
        {
            cin>>arreglo[i];
            if(arreglo[i]==1)
            {
                coro++;
            }
        }
        if(coro>=2)
        {
            conta++;
        }
    }
    cout<<conta;

    return 0;
}
