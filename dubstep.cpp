#include<bits/stdc++.h>
using namespace std;

int main(){

    string palabra;
    int conta=0;
    cin>>palabra;

    for (int i=0;i<palabra.size();i++){

        if(palabra[i]=='W'&&palabra[i+1]=='U'&& palabra[i+2]=='B'&& i<=palabra.size()-2){
            if(conta==0){
                i+=2;
            }else{
                cout<<" ";
                i+=2;
            }

        }else{
            cout<<palabra[i];
            conta++;

        }

    }

    return 0;
}
