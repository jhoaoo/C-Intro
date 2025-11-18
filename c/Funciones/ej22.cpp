#include <iostream>
#include <algorithm>
using namespace std;
string tipoTriangulo(double a, double b, double c) {
    double lados[3]={a,b,c};
    sort(lados,lados+3);
    double x=lados[0],y=lados[1],z=lados[2];
    if(x+y<=z) return "No es triangulo";
    double x2=x*x,y2=y*y,z2=z*z;
    if(z2==x2+y2) return "Triangulo rectangulo";
    else if(z2<x2+y2) return "Triangulo acutangulo";
    else return "Triangulo obtusangulo";
}
int main(){
    double a,b,c;
    cout<<"Lado 1: ";cin>>a;
    cout<<"Lado 2: ";cin>>b;
    cout<<"Lado 3: ";cin>>c;
    cout<<tipoTriangulo(a,b,c)<<endl;
    return 0;
}
