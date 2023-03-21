#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int a;
        int b;
        cin>>a>>b;
        string aa,bb;
        cin>>aa>>bb;
        if(aa.size()==1 && bb.size()==1)
        {
            cout<<"YES"<<endl;
            continue;
        }
        int conta=0;

        for(int i=0; i<aa.size(); i++)
        {
            if(i<aa.size()-1 && aa[i]==aa[i+1])
            {
                conta++;
            }
        }
        for(int i=bb.size()-1; i>=0; i--)
        {
            if(i==bb.size()-1 && aa[a-1]==bb[i])
            {
                conta++;
            }
            if(i>0 && bb[i]==bb[i-1])
                conta++;
        }

        if(conta>1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }




    }

    return 0;
}
