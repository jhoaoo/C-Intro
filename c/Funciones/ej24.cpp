#include <iostream>
using namespace std;
long long sumaHastaN(int n){
    long long s=0;
    for(int i=1;i<=n;i++) s+=i;
    return s;
}
int main(){
    int n;
    cout<<"Ingrese n: ";cin>>n;
    cout<<"Suma de 1 a n: "<<sumaHastaN(n)<<endl;
    return 0;
}
