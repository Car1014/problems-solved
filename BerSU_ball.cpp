#include<bits/stdc++.h>
using namespace std;

int main(){

    int h,f,aux;
    cin>>h;
    int hombres[h];
    for(int i=0;i<h;i++)cin>>hombres[i];
    cin>>f;
    int mujeres[f];
    for(int i=0;i<f;i++)cin>>mujeres[i];

    for(int i=0;i<h;i++)
        for (int j=0;j<h-1;j++)
        {
            if (hombres[j]>hombres[j+1])
            {
                aux= hombres[j];
                hombres[j]=hombres[j+1];
                hombres[j+1]=aux;
            }
        }

    for(int i=0;i<f;i++)
        for (int j=0;j<f-1;j++)
        {
            if (mujeres[j]>mujeres[j+1])
            {
                aux= mujeres[j];
                mujeres[j]=mujeres[j+1];
                mujeres[j+1]=aux;
            }
        }
    //for(int i=0;i<h;i++)cout<<hombres[i]<<" ";
    //cout<<endl;
    //for(int i=0;i<f;i++)cout<<mujeres[i]<<" ";
    //cout<<endl;

    int i=0,j=0,conta=0;

    while(i<h && j<f)
    {
        if(hombres[i]==mujeres[j]) {
            conta++;
            hombres[i]=-3;
            mujeres[j]=-3;
            i++;
            j++;

            continue;
        }
        if(hombres[i]==mujeres[j]+1)
        {
            //cout<<hombres[i]<<"  "<<mujeres[i]<<endl;
            hombres[i]=-2;
            mujeres[j]=-2;
            i++;
            j++;
            conta++;
            continue;
        }
        if(hombres[i]==mujeres[j]-1)
        {
            hombres[i]=-3;
            mujeres[j]=-3;
            conta++;
            i++;
            j++;
            continue;
        }
        if(hombres[i]>mujeres[j])
        {
            j++;
            continue;
        }
        if(hombres[i]<mujeres[j])
        {
            i++;
            continue;
        }




    }
    //for(int i=0;i<h;i++)cout<<hombres[i]<<" ";
    //cout<<endl;
    //for(int i=0;i<f;i++)cout<<mujeres[i]<<" ";
    //cout<<endl;
    cout<<conta;


    return 0;
}
/*
2
2 2
1
2
*/
















