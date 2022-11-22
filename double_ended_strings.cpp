#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--)
    {
        string a,b;
        cin>>a>>b;

        int i=0,j=0;
        vector<int> resp;
        while(i<a.size()){
                //cout<<"--";
            if(j==b.size()){
                i++;
                j=0;
            }
            if(i>=a.size())break;

            if(a[i]==b[j]){

                int conta=0,k=i,l=j;
                while(a[k]==b[l] && k<a.size() && l<b.size()){
                    //cout<<"entre";
                    conta++;
                    l++;
                    k++;
                }
                resp.push_back(conta);
            }
            j++;


        }
        //cout<<"entre";
        //cout<<*max_element(resp.begin(),resp.end())<<endl;
        if(resp.size()!=0){
            cout<<a.size()+b.size()-(*max_element(resp.begin(),resp.end())*2)<<endl;
        }else{
            cout<<a.size()+b.size()<<endl;
        }
    }



    return 0;
}
/*
1
c
a
*/
















