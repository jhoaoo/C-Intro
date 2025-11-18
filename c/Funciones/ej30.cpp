#include <iostream>
using namespace std;
void generarSecuencia(int filas){
    for(int i=1;i<=filas;i++){
        for(int e=0;e<filas-i;e++) cout<<" ";
        for(int j=i;j<2*i;j++) cout<<(j%10);
        for(int j=2*i-2;j>=i;j--) cout<<(j%10);
        cout<<endl;
    }
}
int main(){
    int f;
    cout<<"Numero de filas (11-20): ";cin>>f;
    if(f<11||f>20){ cout<<"Valor fuera de rango."<<endl; return 0;}
    generarSecuencia(f);
    return 0;
}
