#include<iostream>
#include<vector>
using namespace std;

int main(){

    int n;
    int m;
    int suma;
    int i=0;
    int j=0;
    cin>>n;
    int arreglo[9];

    while(n--)
    {
        cin>>m;

        i=9;
        j=0;
        suma=0;

        if(m<10)
        {
            cout<<m<<endl;
            continue;
        }
        while(suma!=m)
        {
            suma+=i;

            if(suma<=m)
            {

                arreglo[j]=i;
                j++;
            }

            if(suma>m)
            {
                suma-=i;
            }
            i--;
        }
         for(int i=j-1;i>-1;i--)
            {
                cout<<arreglo[i];
            }
            cout<<endl;
    }

    return 0;
}







