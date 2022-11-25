#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int m,primer,segundo,conta=0;
        cin>>m;
        int arreglo[m];
        for(int i=0;i<m;i++)cin>>arreglo[i];

        primer=0;
        segundo=0;

        for(int i=0;i<m;i++)
        {
            if(arreglo[i]>primer){
                primer=arreglo[i];
            }
        }
        for(int i=0;i<m;i++){
            if(primer==arreglo[i])conta++;

            if(arreglo[i]>segundo && arreglo[i]!=primer)
            {
                segundo=arreglo[i];
            }
        }
        //cout<<primer<<"  --"<<endl;
        //cout<<segundo<<"--"<<endl;
        if(conta==1){
             for(int i=0;i<m;i++){
                if(primer!=arreglo[i]){
                    cout<<arreglo[i]-primer<<" ";
                }else{
                    cout<<arreglo[i]-segundo<<" ";
                }
             }

        }else{

            for(int i=0;i<m;i++){
                cout<<arreglo[i]-primer<<" ";
            }


        }
        cout<<endl;


    }

    return 0;
}
















