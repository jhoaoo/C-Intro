#include <iostream>
using namespace std;
void dibujarFigura(int h,char ch){
    for(int f=0;f<h;f++){
        for(int s=0;s<f*2;s++) cout<<" ";
        for(int k=0;k<h-f;k++) cout<<ch;
        cout<<endl;
    }
}
int main(){
    int h; char ch;
    cout<<"Altura: ";cin>>h;
    cout<<"Caracter: ";cin>>ch;
    dibujarFigura(h,ch);
    return 0;
}
