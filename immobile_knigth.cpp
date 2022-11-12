#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int filas,columnas;
        cin>>filas>>columnas;
        if(filas<4 && columnas<4){
            if(filas==columnas && filas!=1 && columnas!=1){
                cout<<filas-1<<" "<<columnas-1<<endl;
                continue;
            }
            if(filas==1 || columnas==1){
                cout<<filas<<" "<<columnas<<endl;
                continue;
            }
            if(filas==1 && columnas==1){
                cout<<filas<<" "<<columnas<<endl;
            }
            cout<<filas/2+1<<" "<<columnas/2+1<<endl;

        }else{
            cout<<filas<<" "<<columnas<<endl;
        }

    }

    return 0;
}
