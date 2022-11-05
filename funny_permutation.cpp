#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    while(n--){

        int m;
        cin>>m;
        if(m==5)
        {
            cout<<5<<" "<<4<<" "<<1<<" "<<2<<" "<<3<<endl;
            continue;
        }
        if(m%2==0){

            for(int i=m;i>0;i--)
            {
                cout<<i<<" ";
            }
        }else{
            if(m>3){

                for(int i=m;i>0;i--)
                {
                    if(i==m/2)
                    {
                        cout<<i+1<<" ";
                        continue;
                    }
                    if(i==m/2+1)
                    {
                        cout<<i-1<<" ";
                        continue;
                    }
                    cout<<i<<" ";

                }
                cout<<endl;
            }else{
            cout<<-1<<endl;
            }
        }



    }

    return 0;
}
/*
5
4
3
7
5
2
*/
