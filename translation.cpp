#include <bits/stdc++.h>

using namespace std;

int main()
{

    string a,b;
    cin>>a>>b;

    int i=0,j=b.size()-1;

    while(i<a.size()  || j>0){

        if(a[i]!=b[j]){
            cout<<"NO";
            return 0;
        }
        i++;
        j--;
    }
    cout<<"YES";


    return 0;
}





