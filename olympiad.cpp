#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,bandera=0,conta=n;
    cin>>n;
    int arreglo[n];
    vector<int> filtro,chulo;

    for(int i=0;i<n;i++){

        cin>>arreglo[i];
        if(arreglo[i]!=0)
        {
            filtro.push_back(arreglo[i]);
        }
    }

    for(int i=0;i<filtro.size();i++)
    {
        for(int j=0;j<chulo.size();j++)
        {

            if(filtro[i]==chulo[j])
            {
                bandera=1;
            }
        }
        if(bandera==0)
        {
            chulo.push_back(filtro[i]);
        }else{
            bandera=0;
        }
    }

    cout<<chulo.size();

    return 0;
}














