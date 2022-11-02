#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){

        int t,acum=0;
        string comp="Timur";
        cin>>t;
        string a;
        //fflush(stdin);
        cin>>a;

        if(t!=5){
            cout<<"NO"<<endl;
            continue;
        }else{
            for(int i=0;i<5;i++)
            {
                for(int j=0;j<5;j++)
                {
                    if(comp[i]==a[j])
                    {
                        acum++;
                        break;
                    }
                }
            }
            if(acum==5)
            {
                cout<<"YES"<<endl;

            }else{
                cout<<"NO"<<endl;
                acum=0;
            }

        }


    }



    return 0;
}




/*
10
5
Timur
5
miurT
5
Trumi
5
mriTu
5
timur
4
Timr
6
Timuur
10
codeforces
10
TimurTimur
5
TIMUR

*/

















