#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

       int m,bandera=0,aux;
       cin>>m;
       int arreglo[m];
       for(int i=0;i<m;i++)cin>>arreglo[i];



       for(int i=0;i<m;i++){

            if(i==0){
                //cout<<arreglo[i]<<" ";
                aux=arreglo[i];
            }else{

                if(aux>=arreglo[i] && arreglo[i]!=0){
                    bandera=1;
                    cout<<-1<<endl;
                    break;
                }

                aux=arreglo[i]+aux;

                //cout<<aux<<" ";

            }

       }


       if(bandera==0){

            for(int i=0;i<m;i++){

            if(i==0){
                cout<<arreglo[i]<<" ";
                aux=arreglo[i];
            }else{

                aux=arreglo[i]+aux;

                cout<<aux<<" ";

            }

       }
       cout<<endl;


       }



    }

    return 0;
}









