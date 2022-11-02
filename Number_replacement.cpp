#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    map<int,char>mapa;
    while(n--)
    {
        int t;
        cin>>t;
        int arreglo[t],bandera=0;
        string palabra;
        for(int i=0;i<t;i++)cin>>arreglo[i];
        fflush(stdin);
        cin>>palabra;

        for(int i=0;i<t;i++)
        {
            mapa[arreglo[i]]=palabra[i];
        }
        for(int i=0;i<t;i++)
        {
            if(mapa[arreglo[i]]!=palabra[i])
            {
                cout<<"NO"<<endl;
                bandera=1;
                break;
            }

        }
        if(bandera==1)
        {
            bandera=0;

        }else{
            cout<<"YES"<<endl;
        }


    }

    return 0;
}













