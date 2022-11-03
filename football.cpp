#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,conta=0;
    cin>>n;
    string equipos[n],aux,otro;
    for(int i=0;i<n;i++)
    {
        cin>>equipos[i];
        aux= equipos[0];

        if(equipos[i]==aux)
        {
            conta++;
        }else{
            otro=equipos[i];
        }
    }

    if(conta>n/2)
    {
        cout<<aux;
    }else{
        cout<<otro;
    }



    return 0;
}











