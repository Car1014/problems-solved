#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int m;
        vector<int> impar;
        cin>>m;
        if(m%2==0){
            int bandera=1;
            for(int i=1;i<=m;i++){
                if(bandera==1){
                    cout<<i+1<<" ";
                    bandera=0;
                }else{
                    cout<<i-1<<" ";
                    bandera=1;
                }
            }
            cout<<endl;
        }else{

            int bandera=1;
            for(int i=m;i>=1;i--){

                if(i==1){
                    impar.push_back(1);
                    continue;
                }

                if(bandera==1){
                    impar.push_back(i-1);
                    bandera=0;
                }else{
                    impar.push_back(i+1);
                    bandera=1;
                }
            }

            for(int i=impar.size()-1;i>=0;i--)cout<<impar[i]<<" ";
            cout<<endl;

        }

    }

    return 0;
}
