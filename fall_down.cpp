#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){

        int n,m;
        cin>>n>>m;
        string a[n];
        for(int i=0;i<n;i++)cin>>a[i];

        for(int i=0;i<m;i++){
                vector<int> vac;
                int aux=0;
            for(int j=n-1;j>=0;j--){

                if(a[j][i]=='.'){

                    vac.push_back(j);
                   // cout<<j<<" ";

                    continue;
                }
                if(a[j][i]=='*'){

                    if(vac.size()!=0){
                        a[vac[aux]][i]='*';
                        a[j][i]='.';
                        vac.push_back(j);
                        //cout<<"entre";
                        aux++;
                    }
                    continue;
                }
                if(a[j][i]=='o'){
                    aux=0;
                    if(vac.size()!=0){
                    vac.clear();
                    }

                    continue;
                }

            }
        }
        //cout<<"---------------"<<endl;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<a[i][j];
            }
            cout<<endl;
        }


    }


    return 0;
}









