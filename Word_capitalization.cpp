#include<bits/stdc++.h>
using namespace std;

int main(){

    string palabra;
    cin>>palabra;

    if(palabra[0]>90){

        palabra[0]=palabra[0]-32;
        cout<<palabra;

    }else{
        cout<<palabra;
    }

    return 0;
}
