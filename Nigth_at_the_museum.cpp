#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin>>a;

    int aux=97,aux2;

    int acum=0;
    for(int i=0;i<a.size();i++)
    {
        aux2=a[i]-aux;

        if(aux2<0)
        {
            aux2=aux2*-1;
        }
        if(aux2>13)
        {
            acum=acum+26-aux2;
            //cout<<acum<<endl;
            //printf("%d \n",a[i]-aux);


        }else{
            acum=acum+aux2;
        }
        aux=a[i];
        //cout<<acum<<endl;

    }
    cout<<acum;
    return 0;
}













