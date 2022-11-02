#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int tam,conta=0,contaq=0;
        cin>>tam;
        string a;
        cin>>a;

        for(int i=tam-1;i>=0;i--)
        {

            if(a[i]=='A')
            {
                conta++;

            }else{
                conta--;
            }
            if(conta<0)
            {
                cout<<"No"<<endl;
                break;
            }
        }
        if(conta>=0){
            cout<<"Yes"<<endl;
        }

    }

    return 0;
}










