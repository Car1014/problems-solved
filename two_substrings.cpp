#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    string b="aba",c="baba";
    string pre[a.size()];
    cin>>a;

    int contaba=0,contaab=0,aux=0;
    for(int i=0;i<a.size();i++){
        if(a[i]=='A' && a[i+1]=='B' && a[i+2]=='A'){
            aux++;
            i+=2;
            continue;
        }
        if(a[i]=='B' && a[i+1]=='A' && a[i+2]=='B'){
            aux++;
            i+=2;
            continue;
        }

        if(a[i]=='A' && a[i+1]=='B' && i<a.size()-1 && contaab<1){
            contaab++;
            i++;
            //cout<<a[i]<<a[i+1]<<endl;
            continue;
        }
        if(a[i]=='B' && a[i+1]=='A' && i<a.size()-1){
            contaba++;

            //cout<<a[i]<<a[i+1]<<endl;
            i++;
            continue;

        }

    }
    if(aux>1){
        cout<<"YES";
        return 0;
    }
    if(aux==1){
        if(contaab==0)
        {
            contaab++;
        }else{
            if(contaba==0){
                contaba++;
            }
        }

    }
    if(contaab==0 || contaba==0){
        cout<<"NO";
    }else{
        cout<<"YES";
    }

    return 0;
}




















