#include <iostream>
using namespace std;
long long factorial(int n){
    long long f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
long long sumaFactoriales(int n){
    long long s=0;
    for(int i=1;i<=n;i++) s+=factorial(i);
    return s;
}
int main(){
    int n;
    cout<<"Ingrese n: ";cin>>n;
    cout<<"Suma de factoriales: "<<sumaFactoriales(n)<<endl;
    return 0;
}
