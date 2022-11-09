#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,suma=0;
    cin>>n;
    int arreglo[n];
    for(int i=0;i<n;i++){
        cin>>arreglo[i];
        suma+=arreglo[i];
    }
    int turno[n+1];
    for(int i=0;i<n+1;i++)turno[i]=0;

    int i=0,j=1;
    while(j<suma+1){

        turno[i]=j;
        j++;
        i++;

        if(i>n){

            i=0;
        }
    }


    int l=i-1,pasos=1 ,result=0;
    //cout<<turno[l]<<endl;
    while(pasos<6){

        l++;
        if(l>n){
            l=0;
        }

        if(l==0){
            pasos++;
            continue;
        }
        pasos++;
        result++;

    }
    cout<<result;


    return 0;
}
