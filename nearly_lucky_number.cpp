#include<bits/stdc++.h>
using namespace  std;

int main(){

    long long n,aux,com4=0,com7=0,acum=0,conta=0;
    cin>>n;
    long long tam;

    while(n>0)
    {
        tam++;
        aux=n%10;

        if(aux==4)
        {
            com4=1;
            acum++;
        }
        if(aux==7)
        {
            com7=1;
            acum++;
        }
        n=n/10;
    }
    if(acum==4 || acum==7)
    {
        cout<<"YES";
        return 0;
    }
    if(com4==0 || com7==0)
    {
        cout<<"NO";
        return 0;
    }
    if(tam==acum)
    {
        cout<<"NO";
        return 0;
    }
    cout<<"NO";


    return 0;
}
