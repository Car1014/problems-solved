#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int m,posicion;
        cin>>m;
        string a;
        cin>>a;
        posicion=m;
        for(int i=0;i<m;i++){

            if(a[i]=='8'){
                posicion=i;
                break;
            }
        }
        if(m-posicion>=11){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}
















