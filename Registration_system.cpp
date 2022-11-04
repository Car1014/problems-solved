#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<string> usuarios;
    vector<int> repetidos;

    while(n--)
    {
        int bandera=0,i;
        string aux;
        cin>>aux;
        for(i=0;i<usuarios.size();i++)
        {
            if(usuarios[i]==aux)
            {
                bandera=1;
                break;
            }
        }
        if(bandera==0)
        {
            usuarios.push_back(aux);
            repetidos.push_back(0);
            cout<<"OK"<<endl;
        }else{
            repetidos[i]=repetidos[i]+1;
            cout<<aux<<repetidos[i]<<endl;
        }

    }


    return 0;
}




















