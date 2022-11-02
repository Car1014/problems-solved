#include<iostream>

using namespace std;

int main(){

    int n;
    int m;
    int puertas[3];
    int aux;

    cin>>n;

    while(n--)
    {
        cin>>m;
        for(int i=0;i<3;i++)cin>>puertas[i];


        aux=puertas[m-1];

        if(aux==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        aux=puertas[aux-1];
        if(aux==0)
        {
            cout<<"NO"<<endl;
            continue;
        }
        aux=puertas[aux-1];
        if(aux==0)
        {
            cout<<"SÍ"<<endl;
        }


    }

    return 0;

}







