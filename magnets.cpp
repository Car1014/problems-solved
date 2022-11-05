#include<bits/stdc++.h>
using namespace std;

int main(){

    int n,conta=0;
    cin>>n;
    int imanes[n];
    for(int i=0;i<n;i++)cin>>imanes[i];

    for(int i=0;i<n-1;i++)
    {
        if(imanes[i]==imanes[i+1])
        {

        }else{
            conta++;
        }

    }
    conta++;
    cout<<conta;

    return 0;
}
















