#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{

    string s;
    cin>>s;
    int conta1=0,conta2=0,conta3=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
        {
            conta1++;
        }
        if(s[i]=='2')
        {
            conta2++;
        }
        if(s[i]=='3')
        {
            conta3++;
        }
    }
    for(int i=0; i<conta1; i++){
        if(conta2==0 && conta3==0 && i+1==conta1)
        {
            cout<<"1";
        }else{
        cout<<"1+";}
    }
    for(int i=0; i<conta2; i++){
        if(conta3==0 && i+1==conta2)
        {
            cout<<"2";
        }else{

        cout<<"2+";
        }
        }
    for(int i=0; i<conta3; i++)
    {

        if(i+1==conta3)
        {
            cout<<"3";
        }
        else
        {
            cout<<"3+";
        }
    }

    return 0;
}






