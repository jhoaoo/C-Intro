#include <iostream>
using namespace std;
long long sumaImpares(int a,int b){
    long long s=0;
    for(int i=a;i<=b;i++) if(i%2!=0) s+=i;
    return s;
}
long long sumaPares(int a,int b){
    long long s=0;
    for(int i=a;i<=b;i++) if(i%2==0) s+=i;
    return s;
}
int main(){
    int a,b;
    cout<<"Inicio del rango: ";cin>>a;
    cout<<"Fin del rango: ";cin>>b;
    cout<<"Suma de impares: "<<sumaImpares(a,b)<<endl;
    cout<<"Suma de pares: "<<sumaPares(a,b)<<endl;
    return 0;
}
