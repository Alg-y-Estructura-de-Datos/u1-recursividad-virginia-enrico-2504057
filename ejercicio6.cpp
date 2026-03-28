//Crear un programa que pida al usuario un número entero positivo "n". Luego
//implementar una función recursiva que cuente la cantidad de dígitos pares que
//ocupan posiciones impares (identificándolas de izquierda a derecha) en "n". Ej.: si
//el número es 22005 el resultado es 2, y si fuera 1414 el resultado es 0
#include<iostream>
using namespace std;

//funcion recursiva 
int contarDigitosPares(int n, int pos = 1){
    //caso base: si el numero es 0, no hay mas digitos para contar
    if(n==0){
        return 0;
    }
    //caso recursivo
    int ultimoDigito = n%10;
    if (pos %2 == 1 && ultimoDigito %2 == 0)
    {
        return 1 + contarDigitosPares(n/10, pos+1);
    }
    else
    {
        return contarDigitosPares(n/10, pos+1);
    } 
}
int main(){
    int n;
    cout<<"Ingrese un numero entero positivo: ";
    cin>>n;
    int cantidad = contarDigitosPares(n);
    cout<<"La cantidad de digitos pares en posiciones impares es: "<<cantidad<<endl;
    return 0;
}