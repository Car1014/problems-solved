#include<bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin>>n;

    while(n--)
    {

        int l,dif,aux;
        cin>>l>>dif;
        int arreglo[2*l];
        for(int i=0; i<l*2; i++)cin>>arreglo[i];

        for(int i=0; i<(l*2)-1; i++)
            for (int j=0; j<(l*2)-1; j++)
            {
                if (arreglo[j]>arreglo[j+1])
                {
                    aux= arreglo[j];
                    arreglo[j]=arreglo[j+1];
                    arreglo[j+1]=aux;
                }
            }
        int i=l-1,j=(l*2)-1,bandera=0;
        while(i>-1 || j>l-1)
        {
            //cout<<arreglo[j]<<" "<<arreglo[i]<<endl;
            if(arreglo[j]-arreglo[i]<dif)
            {
                cout<<"NO"<<endl;
                bandera=1;
                break;
            }
            i--;
            j--;
        }
        if(bandera==0)
        {
            cout<<"YES"<<endl;
        }


    }

    return 0;
}







