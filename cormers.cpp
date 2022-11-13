#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n--)
    {

        int filas,columnas,ceros=0,unos=0,bandera=0;
        cin>>filas>>columnas;
        string a[filas];
        for(int i=0; i<filas; i++)cin>>a[i];

        for(int i=0; i<filas; i++)
        {
            for(int j=0; j<columnas; j++)
            {

                if(a[i][j]=='0')
                {
                    ceros++;

                }
                else
                {
                    unos++;
                }
            }
        }
        if(ceros==0 || ceros==1 )
        {
            cout<<filas*columnas-2<<endl;
            continue;
        }
        if(unos==0)
        {
            cout<<0<<endl;
            continue;
        }
        for(int i=0; i<filas; i++)
        {
            for(int j=0; j<columnas; j++)
            {

                if(a[i][j]=='0')
                {

                    if(i>0 && i<filas-1 && j>0 && j<columnas-1 )
                    {

                        if(a[i+1][j]=='0' || a[i-1][j]=='0' || a[i][j+1]=='0' || a[i][j-1]=='0' ||a[i-1][j-1]=='0' || a[i-1][j+1]=='0' || a[i+1][j-1]=='0' || a[i+1][j+1]=='0')
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;

                    }
                    if(i==0 && j==0)
                    {
                        if(a[i+1][j]=='0' || a[i][j+1]=='0' || a[i+1][j+1]=='0')
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }


                    if(i==0 && j==columnas-1)
                    {
                        if(a[i+1][j]=='0' || a[i][j-1]=='0' || a[i+1][j-1]=='0')
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;

                    }
                    if(i==filas-1 && j==0)
                    {
                        if(a[i-1][j]=='0' || a[i][j+1]=='0' || a[i-1][j+1]=='0')
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }
                    if(i==filas-1 && j==columnas-1)
                    {
                        if(a[i-1][j]=='0' || a[i][j-1]=='0' || a[i-1][j-1]=='0')
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }

                    if(i==0)
                    {
                        if(a[i][j-1]=='0' || a[i+1][j-1]=='0' || a[i+1][j]=='0' || a[i+1][j+1]=='0' || a[i][j+1]=='0' )
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }
                    if(j==0)
                    {

                        if(a[i-1][j]=='0' || a[i-1][j+1]=='0' || a[i][j+1]=='0' || a[i+1][j+1]=='0' || a[i+1][j]=='0' )
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }
                    if(i==filas-1)
                    {
                        if(a[i][j-1]=='0' || a[i-1][j-1]=='0' || a[i-1][j]=='0' || a[i-1][j+1]=='0' || a[i][j+1]=='0' )
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }
                    if(j==columnas-1)
                    {

                        if(a[i-1][j]=='0' || a[i-1][j-1]=='0' || a[i+1][j-1]=='0' || a[i+1][j]=='0' || a[i][j+1]=='0' )
                        {
                            cout<<unos<<endl;
                            bandera=1;
                            break;
                        }
                        continue;
                    }
                }

            }
            if(bandera==1)break;
        }


        if(bandera==0)
        {
            cout<<unos-1<<endl;
        }
    }

    return 0;
}
