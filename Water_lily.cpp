#include<bits/stdc++.h>
using namespace std;

int main(){

    double h,l;
    cin>>h>>l;

    double aux;

    aux=(pow(l,2)-pow(h,2))/(2*h);

    printf("%.13f",aux);
    return 0;
}
