#include<iostream>
using namespace std;

int sumarecursiva(int n){
    if(n==0){
        return 0;
    }else{
        cout<<n<<" + ";
    return n + sumarecursiva(n-1);
    }
}
int main(){
    int n=5;
    cout<<"Suma de los primeros "<<n<<" numeros naturales: ";
    int suma = sumarecursiva(n);
    cout<<" = "<<suma<<endl;
    return 0;
}