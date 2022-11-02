#include<bits/stdc++.h>
#include<string>
using namespace std;

int main(){

    int n;
    cin>>n;
    //char palabra[50];
    int m;
    int alfabeto[17];
    vector<int> respuesta;

    alfabeto[0]=106;
    alfabeto[1]=107;
    alfabeto[2]=108;
    alfabeto[3]=109;
    alfabeto[4]=110;
    alfabeto[5]=111;
    alfabeto[6]=112;
    alfabeto[7]=113;
    alfabeto[8]=114;
    alfabeto[9]=115;
    alfabeto[10]=116;
    alfabeto[11]=117;
    alfabeto[12]=118;
    alfabeto[13]=119;
    alfabeto[14]=120;
    alfabeto[15]=121;
    alfabeto[16]=122;

    while(n--)
    {

        cin>>m;
        string palabra;
        cin>>palabra;
        for(int i=m-1;i>=0;i--)
        {

            if(palabra[i]!='0')
            {
                respuesta.push_back(palabra[i]+48);
                continue;

            }

            if (palabra[i-2]==49)
            {

                respuesta.push_back(alfabeto[palabra[i-1]+palabra[i-2]-97]);

            }
            if(palabra[i-2]==50)
            {
                respuesta.push_back(alfabeto[palabra[i-1]+palabra[i-2]-88]);

            }
            i-=2;
        }
        for(int i=respuesta.size()-1;i>=0;i--)
        {
            printf("%c",respuesta[i]);
        }
        respuesta.clear();
        cout<<endl;
    }


    return 0;
}



/*
9
6
315045
4
1100
7
1213121
6
120120
18
315045615018035190
7
1111110
7
1111100
5
11111
4
2606

*/






