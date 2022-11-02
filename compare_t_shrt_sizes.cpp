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

        if(a[a.length()-1]==b[b.length()-1])
        {
            if(a[a.length()-1]=='L'){
                if(a.length()>b.length())cout<<">"<<endl;
                if(a.length()==b.length())cout<<"="<<endl;
                if(a.length()<b.length())cout<<"<"<<endl;
            }
            if(a[a.length()-1]=='S'){
                if(a.length()>b.length())cout<<"<"<<endl;
                if(a.length()==b.length())cout<<"="<<endl;
                if(a.length()<b.length())cout<<">"<<endl;
            }
            if(a[a.length()-1]=='M'){
                cout<<"="<<endl;
            }
        }else{

            if(a[a.length()-1]=='L' || b[b.length()-1]=='L')
            {
                if(a[a.length()-1]=='L')
                {
                    cout<<">"<<endl;
                }else{cout<<"<"<<endl;}
                continue;
            }
            if(a[a.length()-1]=='S' || b[b.length()-1]=='S')
            {
                if(a[a.length()-1]=='S')
                {
                    cout<<"<"<<endl;
                }else{
                    cout<<">"<<endl;
                }
                continue;
            }
            if(a[a.length()-1]=='M' || b[b.length()-1]=='M')
            {
                if(a[a.length()-1]=='L')
                {
                    cout<<">"<<endl;
                }else{
                    cout<<"<"<<endl;
                }
                continue;
            }


        }
    }

    return 0;
}
/*
6
XXXS XS
XXXL XL
XL M
XXL XXL
XXXXXS M
L M

*/


















