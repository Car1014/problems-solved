#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    int x=0,y=0,z=0;
    while(n--){

        int fuerzas[3];
        for(int i=0;i<3;i++)cin>>fuerzas[i];

        x+=fuerzas[0];
        y+=fuerzas[1];
        z+=fuerzas[2];

    }
    if(x==0 && y==0 && z==0){

        cout<<"YES";

    }else{
        cout<<"NO";
    }


    return 0;
}
















