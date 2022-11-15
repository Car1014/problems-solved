#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){

        long long x,y,a,b;
        cin>>x>>y>>a>>b;


        if(a*2>b){
            if(x==y){
            cout<<x*b<<endl;
            continue;
            }
            if(x>y){
                cout<<(x-y)*a+(y*b)<<endl;
            }else{
                cout<<(y-x)*a+(x*b)<<endl;
            }
        }else{
                cout<<(x+y)*a<<endl;
        }
    }

    return 0;
}
