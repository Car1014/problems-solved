#include<bits/stdc++.h>
using namespace std;

int main(){

    string a;
    cin>>a;

    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='-')
        {
            if(a[i+1]=='.')
            {
                cout<<1;
            }
            if(a[i+1]=='-')
            {
                cout<<2;
            }
            i++;

        }else{
            cout<<0;
        }
    }

    return 0;
}
