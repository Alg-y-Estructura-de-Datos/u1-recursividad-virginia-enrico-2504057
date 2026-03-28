//Crear un programa que emplee recursividad para calcular el mayor de los
//elementos de un vector de “n” tamaño dado por pantalla por el usuario
#include<iostream>
using namespace std;
 
int encontrarmayor (int vec[], int n){
    //caso base 
    if(n==1){
        return vec[0];
    }
    // llamado al caso recursivo 
    int mayor = encontrarmayor(vec, n-1);
    //comparacion del caso base con el caso recursivo
    if(vec[n-1]>mayor){
        return vec[n-1];
    }
    else{
        return mayor;
    }
 

}

int main(){
    int n;
    cout<<"Ingrese el tamaño del vector: ";
    cin>>n;
    int vec[n];
    cout<<"Ingrese los elementos del vector: ";
    for(int i=0; i<n; i++){
        cin>>vec[i];
    }
    int mayor = encontrarmayor(vec, n);
    cout<<"El mayor elemento del vector es: "<<mayor<<endl;
}