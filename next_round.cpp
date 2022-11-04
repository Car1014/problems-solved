#include <bits/stdc++.h>

using namespace std;

int main()
{

   int n,k,conta=0;
   cin>>n>>k;
   int arreglo[n];
   for(int i=0;i<n;i++)cin>>arreglo[i];

   for(int i=0;i<n;i++)
   {

       if(arreglo[k-1]<=arreglo[i] && arreglo[i]!=0)
       {
           conta++;

       }


   }
   cout<<conta;



    return 0;
}






