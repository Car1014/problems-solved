#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin>>n;
    vector<string> repetidos,cadauno;
    vector<int> totales,one;

    while(n--){

        string a;
        cin>>a;
        int puntos,bandera=0,posicion;
        cin>>puntos;
        cadauno.push_back(a);
        one.push_back(puntos);

        for(int i=0;i<repetidos.size();i++){

            if(repetidos[i]==a){
                bandera=1;
                posicion=i;
                break;
            }
        }
        if(bandera==0){
            repetidos.push_back(a);
            totales.push_back(puntos);
        }else{
            totales[posicion]+=puntos;
            bandera=0;
        }

    }

    int repetidor,contador=0;
    repetidor=*max_element(totales.begin(),totales.end());
    vector<string> parejos;
    vector<int> puntosiguales;
    int mayor,i=0,aqui=0;
    mayor=totales[0];

    for(i=0;i<totales.size();i++){

            if(totales[i]>mayor){
                mayor=totales[i];
                aqui=i;
            }
            if(repetidor==totales[i]){
                contador++;
                parejos.push_back(repetidos[i]);
                puntosiguales.push_back(totales[i]);
            }

    }

    if(contador>1){

            for(int i=0;i<cadauno.size();i++){

                    for(int j=0;j<parejos.size();j++){

                        if(puntosiguales[j]<1){
                            cout<<parejos[j];
                            return 0;

                        }

                        if(parejos[j]==cadauno[i]){

                            puntosiguales[j]-=one[i];
                        }
                    }

            }



    }else{
        cout<<repetidos[aqui];
    }


    return 0;
}


















