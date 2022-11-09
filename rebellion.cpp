#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){

        int m;
        cin>>m;
        int arreglo[m];
        for(int i=0;i<m;i++){
            cin>>arreglo[i];
        }
        int i=0,j=m-1,pasos=0;
        while(i<j){
            if(arreglo[i]==1 && arreglo[j]==1){

                j--;
            }

            if(arreglo[i]==0 && arreglo[j]==1){

                i++;
                j--;
                continue;
            }

            if(arreglo[j]==0 && arreglo[i]==1){
                pasos++;
                i++;
                j--;
                continue;
            }
            if(arreglo[j]==0 && arreglo[i]==0)
            {
                i++;
            }

        }
        cout<<pasos<<endl;
    }

    return 0;
}
