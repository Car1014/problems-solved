#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int tam,conta=0,bandera=0,terminador=0;
        cin>>tam;
        vector<int> filtro,repetidos;
        int arreglo[tam];
        int i,j,aux;
        for(i=0;i<tam;i++)cin>>arreglo[i];

        aux=arreglo[0];
        for(int i=0;i<tam;i++)
        {
            if(arreglo[i]>aux)
            {
                aux=arreglo[i];
            }
        }
        int ordenado[aux+1];
        for(int i=0;i<aux+1;i++)ordenado[i]=0;


        for(int i=0;i<tam;i++)
        {
             ordenado[arreglo[i]]+=1;
        }
        for(int i=0;i<aux+1;i++)
        {
            if(ordenado[i]>=3){
                bandera=1;
                cout<<i<<endl;
                break;
            }
        }
        if(bandera==0)
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}






















