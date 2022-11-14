#include<bits/stdc++.h>
using namespace std;

int main(){

    int posicion[3];
    string a[3];
    string abc="ABC";


    for(int i=0;i<3;i++)cin>>a[i];

    for(int i=0;i<3;i++)posicion[i]=0;

    for(int i=0;i<3;i++){

        if(a[i][1]=='>'){

            if(a[i][0]=='A'){
                posicion[0]+=1;
            }
            if(a[i][0]=='B'){
                posicion[1]++;
            }
            if(a[i][0]=='C'){
                posicion[2]++;
            }


        }else{

            if(a[i][2]=='A'){
                posicion[0]++;
            }
            if(a[i][2]=='B'){
                posicion[1]++;
            }
            if(a[i][2]=='C'){
                posicion[2]++;
            }


        }
    }
    int bandera=0,it=2,uno=4,dos=4,cero=4;
    for(int i=2;i>=0;i--){

        if(posicion[i]==2)
        {
            dos=i;
        }
         if(posicion[i]==1)
        {
            uno=i;
        }
         if(posicion[i]==0)
        {
            cero=i;
        }
    }

    if(uno==4 || dos==4 || cero==4){

        cout<<"Impossible";
    }else{

        cout<<abc[cero]<<abc[uno]<<abc[dos];
    }

    return 0;
}















