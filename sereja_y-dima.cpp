#include<bits/stdc++.h>

using namespace std;

int main(){

    int seraja=0,dima=0;
    int n,aux;
    cin>>n;
    int v[n];

    for(int i=0;i<n;i++)cin>>v[i];

    int i=0,j=n-1,turno=0;
    while(i<j)
    {


        if(v[i]>v[j])
        {
            if(turno==0)
            {
                seraja+=v[i];
                turno=1;
            }else{
                dima+=v[i];
                turno=0;
            }
            i++;
            continue;
        }
        if(v[i]<v[j])
        {
            if(turno==0)
            {
                seraja+=v[j];
                turno=1;
            }else{
                dima+=v[j];
                turno=0;
            }
            j--;
        }


    }
    if(turno==0)
    {
        seraja+=v[i];

    }else{
        dima+=v[i];
    }
    cout<<seraja<<" "<<dima;





    return 0;
}

















