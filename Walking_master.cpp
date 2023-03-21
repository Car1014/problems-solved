#include<bits/stdc++.h>

using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int first[2];
        int subir=0,izq=0;
        cin>>first[0];
        cin>>first[1];
        int second[2];
        cin>>second[0];
        cin>>second[1];

        if(second[1]<first[1]){
            cout<<-1<<endl;
            continue;
        }
        subir=abs(first[1]-second[1]);
        first[0]+=subir;
        first[1]+=subir;
        if(first[0]<second[0]){
            cout<<-1<<endl;
            continue;
        }
        cout<<abs(first[0]-second[0])+subir<<endl;

    }


    return 0;
}
