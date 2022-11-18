#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        string s,t,p,aux;
        cin>>s>>t>>p;
        int rep[p.size()];
        for(int i=0;i<p.size();i++)rep[i]=0;
        vector<string> unicos;

        int i=0,j=0,conta=0;
        while(j<t.size()){

            if(s[i]==t[j]){

                i++;
                j++;
                conta++;

            }else{
                aux=t[j];
                j++;
                unicos.push_back(aux);
            }
        }
        if(conta<s.size()){
            cout<<"NO"<<endl;
            continue;
        }
        //for(int i=0;i<unicos.size();i++)cout<<unicos[i];

        int k=0,l=0,rompedor=0;
        while(k<unicos.size()){

            if(l>=p.size()){
                cout<<"NO"<<endl;
                rompedor=1;
                break;
            }
            //cout<<unicos[k][0]<<"---"<<p[l]<< "--"<<rep[l]<<endl;;
            if(unicos[k][0]==p[l] && rep[l]==0){
                rep[l]=1;
                //cout<<"entre"<<endl;
                k++;
                l=0;
            }else{
                l++;
            }



        }
        if(rompedor==0){
            cout<<"YES"<<endl;
        }

    }

    return 0;
}








