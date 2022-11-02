#include<bits/stdc++.h>

using namespace std;

int main()
{

    int a,contador=0,j=0,contador2=0;
    int aux;
    cin>>a;
    int arreglo[4];
    int bandera=0;

    for(int i=0; i<4; i++) arreglo[i]=-1;

    while(contador2<4)
    {
        contador=0;
        a++;
        aux=a;
        while(aux>0){

            for(int i=0; i<4; i++)
            {
                if(arreglo[i]==aux%10)
                {
                    for(int i=0; i<4; i++) arreglo[i]=-1;
                    contador=1;
                    break;
                }
            }
            if(contador!=1){
                arreglo[j]=aux%10;

                j++;
            }
            if(contador==1)break;

            aux=aux/10;

        }
        j=0;
        if(contador==0)
            break;

    }
    for(int i=3; i>=0; i--)
        cout<<arreglo[i];

    return 0;
}
