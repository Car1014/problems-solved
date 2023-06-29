#include<bits/stdc++.h>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        string m;
        cin>>m;
        vector<char> c;
        int iguales=0;
        int j=0;

        for(int i=0;i<m.size()-1;i++){

            if(m[i]!=m[i+1]){
                iguales=1;
                i++;
                j++;

            }
        }

        if(iguales==0){
            cout<<"NO"<<endl;

        }else{

            if(m.size()%2==0){
                    cout<<"YES"<<endl;
            }else{

                if(j==1){
                    cout<<"NO"<<endl;
                }else{
                    cout<<"YES"<<endl;
                }

            }

        }



    }
}


























