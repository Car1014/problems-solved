#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,m;
    cin>>n>>m;

    string a[n];

    for(int i=0;i<n;i++)cin>>a[i];

    if(n%3!=0 && m%3!=0){
        cout<<"NO";
        return 0;
    }
    string aux1,aux2,aux3;
    int bandera=0;
    if(n%3==0){
        aux1=a[0][0];
        aux2=a[(n/3)][0];
        aux3=a[n-(n/3)][0];

        if(aux1[0]==aux2[0] || aux1[0]==aux3[0] || aux3[0]==aux2[0]){
            bandera=1;
        }
        //cout<<aux1<<aux2<<aux3;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){

                if(i<n/3){
                    if(aux1[0]!=a[i][j])
                    {
                        //cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }
                if(i<(2*n)/3){
                    if(aux2[0]!=a[i][j]){
                        //cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }
                if(i<n){
                    if(aux3[0]!=a[i][j]){
                        //cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }

            }
            if(bandera==1)break;


        }

    }
    if(bandera==0 && n%3==0){

        cout<<"YES";
        return 0;
    }
    if(bandera==1 && m%3!=0)
    {
        cout<<"NO";
        return 0;
    }

    bandera=0;

    if(m%3==0){
        aux1=a[0][0];
        aux2=a[0][m/3];
        aux3=a[0][m-(m/3)];
         if(aux1[0]==aux2[0] || aux1[0]==aux3[0] || aux3[0]==aux2[0]){
            cout<<"NO";
            return 0;
        }
        //cout<<aux1<<aux2<<aux3;

        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){

                if(i<m/3){
                    if(aux1[0]!=a[j][i])
                    {
                        cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }
                if(i<(2*m)/3){
                    if(aux2[0]!=a[j][i]){
                        cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }
                if(i<m){
                    if(aux3[0]!=a[j][i]){
                        cout<<"NO";
                        bandera=1;
                        break;
                    }
                    continue;
                }

            }
            if(bandera==1)break;
        }

    }
    if(bandera==0 && m%3==0){
        cout<<"YES";
    }



    return 0;
}





















