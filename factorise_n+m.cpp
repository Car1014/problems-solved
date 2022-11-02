#include<bits/stdc++.h>
using namespace std;

int main(){

    int tam=100000;
    int n,criba[tam];
    cin>>n;

    for(int i=0;i<=tam;i++)criba[i]=0;

    for(int i=2;i<=tam;i++)
    {
        for(int j=2;i*j<=tam;j++)
        {
            criba[i*j]=1;
        }
    }



    while(n--){

        int m,aux;
        cin>>m;
        int i=0;
        for(i=2;i<=tam;i++)
        {
            if(criba[i]==0)
            {
                aux=m+i;
                if(criba[aux]==1)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }

    }

    return 0;
}








