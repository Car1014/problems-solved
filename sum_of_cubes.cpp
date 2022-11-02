#include<bits/stdc++.h>
using namespace std;

int main(){
    //int b=cbrt(2);
    //cout<<b;
    int n;
    cin>>n;

    while(n--)
    {
        long long m, bandera=0;
        cin>>m;
        long long a=1,b;
        double  c;
        while(cbrt(m)>a)
        {

            b=cbrt(m-pow(a,3));

            c=cbrt(m-pow(a,3));


            if(b-c==0 && b!=0 && a!=0)
            {
                //cout<<b<<"  "<<a<<endl;
                bandera=1;
                cout<<"YES"<<endl;
                break;
            }
            a++;
        }
        if(bandera==0)
        {
            cout<<"NO"<<endl;
        }



    }

    return 0;
}

















