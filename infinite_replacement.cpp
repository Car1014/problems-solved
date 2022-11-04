#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int bandera=0;
        string a,b;
        cin>>a>>b;

        if(b.size()==1 && b[0]=='a')
        {
            cout<<1<<endl;
            continue;
        }
        for(int i=0;i<b.size();i++)
        {
            if(b[i]=='a')
            {
                cout<<-1<<endl;
                bandera=1;
                break;
            }
        }
        if(bandera==0)
        {
            cout<<pow(2,b.size())<<endl;
        }


    }


    return 0;
}



























