#include<iostream>
using namespace std;

void mostrarinvertido(int numero){
    if(numero == 0){
        return ;
    } else {
        cout<<numero%10;
        mostrarinvertido(numero/10);
    }
}
int main(){
    int n = 123;
    cout << "Número original: " << n << endl;
    cout << "Número invertido: ";
    mostrarinvertido(n);
    cout << endl;
    return 0;
}