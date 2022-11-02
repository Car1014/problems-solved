#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int m,aux;
        vector<int> disp;
        cin>>m;
        int arreglo[m];
        for(int i=0;i<m;i++)cin>>arreglo[i];

        aux=10-m;
        int com=0;
        while(aux>0)
        {
            aux-=1;
            com+=aux;

        }
        cout<<com*6<<endl;






    }

    return 0;
}













