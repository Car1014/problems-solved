#include <bits/stdc++.h>

using namespace std;

int main()
{
    double x1,y1,x2,y2,operacion=0;
    int comprobar;
    cin>>x1>>y1>>x2>>y2;

    operacion=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
    comprobar=sqrt(pow((x2-x1),2)+pow((y2-y1),2));

    if(operacion==comprobar && x1==x2){

        cout<<x1+comprobar<<" "<<y1<<" "<<x2+comprobar<<" "<<y2;
        return 0;
    }
    if(operacion==comprobar && y1==y2){

        cout<<x1<<" "<<y1+comprobar<<" "<<x2<<" "<<y2+comprobar;
        return 0;
    }
    int xs,ys;
    xs=x2-x1;
    ys=y2-y1;
    if(xs<0){
        xs=xs*-1;
    }
    if(ys<0){
        ys=ys*-1;
    }
    if(ys==xs){

        cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        return 0;
    }
    cout<<-1;




    return 0;
}
















