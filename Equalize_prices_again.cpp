#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    while(n--)
    {
        int m,suma=0;
        cin>>m;
        int arreglo[m];
        for(int i=0;i<m;i++){
            cin>>arreglo[i];
            suma+=arreglo[i];
        }
        if(suma%m==0)
        {
            cout<<suma/m<<endl;
        }else{
            cout<<suma/m+1<<endl;
        }



    }

    return 0;
}

















