#include<bits/stdc++.h>
using namespace std;

int main(){

    int s,n;
    cin>>s>>n;
    int poder[n],recompensa[n],vencidos[n];
    for(int i=0;i<n;i++){
        cin>>poder[i]>>recompensa[i];
        vencidos[i]=0;
    }
    int bandera=0,i=0;

    while(i<n){

        if(s>poder[i] && vencidos[i]==0){

            s+=recompensa[i];
            vencidos[i]=1;
            i=0;
        }else{
            i++;
        }

    }

    for(int i=0;i<n;i++)
    {
        if(vencidos[i]==0)
        {
            cout<<"NO";
            bandera=1;
            break;

        }
    }
    if(bandera==0){

        cout<<"YES";
    }
    return 0;
}











