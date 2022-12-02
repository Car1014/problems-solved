#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int flores[n];
    vector<int> pares,impares;
    for(int i=0;i<n;i++){
        cin>>flores[i];

        if(flores[i]%2==0){
            pares.push_back(flores[i]);
        }else{
            impares.push_back(flores[i]);
        }
    }

    if(impares.size()==0){
        cout<<0;
        return 0;
    }
    if(impares.size()%2==1){

        int suma=0;

        for(int i=0;i<n;i++){
            suma+=flores[i];
        }
        cout<<suma;

    }else{
        int suma=0,menor,bande=0;
        menor=*min_element(impares.begin(),impares.end());

        for(int i=0;i<n;i++){
            if(flores[i]== menor && bande==0){
                bande=1;

            }else{
                suma+=flores[i];
            }
        }
        cout<<suma;
    }



    return 0;
}








