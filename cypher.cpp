#include<bits/stdc++.h>
#include<string>

using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){
        int t;
        cin>>t;
        int objetivo[t],tam[t];
        string a[t];
        for(int i=0;i<t;i++)cin>>objetivo[i];

        for(int i=0;i<t;i++){
            cin>>tam[i];
            cin>>a[i];
            }

        for(int i=0;i<t;i++)
        {
            for(int j=tam[i]-1;j>=0;j--)
            {

                if(a[i][j]=='D'){
                    objetivo[i]++;
                }else{
                    objetivo[i]--;
                    if(objetivo[i]==-1)
                    {
                        objetivo[i]=9;
                    }
                }


            }

            cout<<objetivo[i]%10<<" ";
        }

        cout<<endl;


    }


    return 0;
}
