#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;
    int arreglo[n],suma=0,conta=0;
    vector<int> uno,dos,tres;
    for(int i=0; i<n; i++)
    {
        cin>>arreglo[i];
        if(arreglo[i]==3)tres.push_back(arreglo[i]);
        if(arreglo[i]==2)dos.push_back(arreglo[i]);
        if(arreglo[i]==1)uno.push_back(arreglo[i]);
        if(arreglo[i]==4)conta++;
    }
    int i=0,j=2,k=0;

    while(tres.size()!=0 && uno.size()!=0){
        tres.pop_back();
        uno.pop_back();
        conta++;
    }


    if(tres.size()!=0 || uno.size()!=0)
    {
            if(tres.size()!=0){

                conta+=tres.size();
            }
            if(uno.size()!=0 && dos.size()!=0){

                while(uno.size()!=0 && dos.size()!=0)
                {
                    uno.pop_back();
                    uno.pop_back();
                    dos.pop_back();
                    conta++;
                }
            }


    }
    if(dos.size()!=0)
    {

        if(dos.size()%2==0)
        {
            conta+=dos.size()/2;
        }else{

            conta+=dos.size()/2+1;
        }

    }
    if(uno.size()!=0){

        if(uno.size()%4==0){

            conta+=uno.size()/4;
        }else{

            conta+=uno.size()/4+1;
        }
    }
        cout<<conta;

    return 0;
}






















