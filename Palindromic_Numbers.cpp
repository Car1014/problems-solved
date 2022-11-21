#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        string numero;
        int m;
        cin>>m>>numero;

        if(numero[0]!='9'){
            for(int i=0;i<numero.size();i++){
                int conta=0;
                while(numero[i]!=57){
                    conta++;
                    numero[i]++;
                }
                cout<<conta;
            }
            cout<<endl;
        }else{
            vector<int> sumas;
            for(int i=0;i<numero.size();i++){
                int conta=0;
                while(numero[i]!=57){
                    conta++;
                    numero[i]++;
                }
                sumas.push_back(conta);
            }

            for(int i=sumas.size()-1;i>=0;i--){

               if(i==sumas.size()-1){
                    sumas[i]+=2;
               }else{
                    sumas[i]++;
               }

               if(sumas[i]==10){
                    sumas[i]=0;
                    sumas[i-1]++;
               }
               if(sumas[i]==11){
                    sumas[i]=1;
                    sumas[i-1]++;
               }

            }
            for(int i=0;i<sumas.size();i++){
                cout<<sumas[i];
            }
            cout<<endl;

        }



    }


    return 0;
}


















