#include <iostream>
using namespace std;
void descomponerPrimos(int n){
    if(n<=1){ cout<<n<<endl; return;}
    bool primero=true;
    int d=2;
    while(n>1){
        while(n%d==0){
            if(!primero) cout<<" * ";
            cout<<d;
            primero=false;
            n/=d;
        }
        d++;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Ingrese un entero positivo: ";cin>>n;
    descomponerPrimos(n);
    return 0;
}
