#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--)
    {

        int m,bandera=0;
        cin>>m;
        map<int,int>x;
        int arreglo[m];
        for(int i=0;i<m;i++)
        {
            cin>>arreglo[i];
            x[i]=arreglo[i];
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arreglo[i]==arreglo[j] && i!=j)
                {
                    bandera=1;
                    break;
                }
            }
            if(bandera==1)
            {
                break;
            }
        }

        if(bandera==0)
        {
            cout<<"YES"<<endl;

        }else{
            cout<<"NO"<<endl;
            bandera=0;
        }

    }


    return 0;
}









