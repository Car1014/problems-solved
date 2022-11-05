#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;

    while(n--){

        int m,aux;
        cin>>m;
        int arreglo[m];
        for(int i=0;i<m;i++)cin>>arreglo[i];

        int bandera=0;
        for(int i=0;i<m-1;i++)
        {
            if(arreglo[i]!=arreglo[i+1]){
                bandera=1;
            }
        }
        if(bandera==0)
        {
            cout<<1<<endl;
            continue;
        }

        int l=1,j;
        bandera=0;
        vector<int> fin;
        while(l<m+1){

            int suma=0,suma2=0,conta=0;
            vector<int> tam;

            for(int i=0;i<l;i++)
            {
                suma+=arreglo[i];

            }
            tam.push_back(l);

            for(int i=l;i<m;i++)
            {
                conta++;
                suma2+=arreglo[i];
                if(suma2==suma)
                {
                    //cout<<conta<<endl;
                    tam.push_back(conta);
                    conta=0;
                    suma2=0;
                }

            }
            //cout<<"{{{"<<accumulate(tam.begin(), tam.end(), 0)<<endl;
            if(accumulate(tam.begin(), tam.end(), 0)==m && l<=m)
            {
                fin.push_back(*max_element(tam.begin(),tam.end()));
                //cout<<l<<",,,,,"<<*max_element(tam.begin(),tam.end())<<endl;
                bandera=1;


            }
            l++;

        }
        /*for(int i=0;i<fin.size();i++){

            cout<<"!!!"<<fin[i]<<endl;
        }*/
        if(bandera==0)
        {
            cout<<m<<endl;
        }else{
            cout<<*min_element(fin.begin(),fin.end())<<endl;
        }



    }

    return 0;
}
/*
4
6
55 45 30 30 40 100
4
10 23 7 13
5
10 55 35 30 65
6
4 1 1 1 1 4

*/


























