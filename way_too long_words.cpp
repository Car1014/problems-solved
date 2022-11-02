#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--)
    {
        int conta=0;
        string a;
        cin>>a;

        if(a.size()<=10)
        {
            cout<<a<<endl;
        }else{
            cout<<a[0]<<a.size()-2<<a[a.size()-1]<<endl;
        }

    }

    return 0;
}






