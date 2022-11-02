#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--)
    {
        string a;
        cin>>a;

        if(a[0]!='Y' && a[0]!='y')
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a[1]!='E' && a[1]!='e')
        {
            cout<<"NO"<<endl;
            continue;
        }
        if(a[2]!='S' && a[2]!='s')
        {
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }

    return 0;
}


























