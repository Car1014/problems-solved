#include<bits/stdc++.h>
using namespace std;

int main(){

    string n;
    cin>>n;
    int conta=1;
    for(int i=0;i<n.size()-1;i++)
    {
        if(n[i]==n[i+1])
        {
            conta++;
            if(i==n.size()-2)
            {
                conta++;
            }

            if(conta>=7)
        {
            cout<<"YES";
            return 0;
        }
        }else{
            conta=1;
        }

    }
    cout<<"NO";

    return 0;
}
