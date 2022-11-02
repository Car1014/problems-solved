#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int cambio[5];
    cambio[0]=100;
    cambio[1]=20;
    cambio[2]=10;
    cambio[3]=5;
    cambio[4]=1;

    int i=0,conta=0;
    while(n>0)
    {
        if(n-cambio[i]>=0)
        {
            n=n-cambio[i];
            conta++;

        }else{
            i++;
        }
    }
    cout<<conta;

    return 0;
}

















