#include <iostream>
using namespace std;
void fibonacci(int n){
    long long a=0,b=1;
    if(n<=0) return;
    cout<<a;
    if(n==1){ cout<<endl; return;}
    cout<<" "<<b;
    for(int i=3;i<=n;i++){
        long long c=a+b;
        cout<<" "<<c;
        a=b;
        b=c;
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Numero de terminos de Fibonacci: ";cin>>n;
    fibonacci(n);
    return 0;
}
