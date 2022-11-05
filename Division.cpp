#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

            int num;
            cin>>num;

            if(num<=1399)
            {
                cout<<"Division 4"<<endl;
                continue;
            }
            if(num<=1599)
            {
                  cout<<"Division 3"<<endl;
                  continue;
            }
            if(num<=1899)
            {
                cout<<"Division 2"<<endl;
                continue;
            }
            if(num>=1900)
            {
                cout<<"Division 1"<<endl;
                continue;
            }


    }

    return 0;
}











