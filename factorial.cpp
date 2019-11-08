#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;



void imprime(int n, float *f);//inicializo la funcion que usaré en el ejercicio para generar factorial y rellenar arreglo 
    
int main(){
    
   int n;
   cout << "Ingrese valor: "; // se le pide al usuario el  numero a agregar
   cin >> n;// el usuaario agrega el numero
 
   float *Matriz = new float[n]; // se crea el puntero
   imprime(n, Matriz); // ejecuto la funcion en el main
    
    return 0;
}

//modificado de http://ejercicioscpp.blogspot.com/2014/12/calcular-el-factorial-de-un-numero-en-c.html
void imprime(int n, float *f) // realizo la matriz que genera los factoriales de los numeros dados
{
    int k; 
    float nf;
    nf = 1;
    for (k=1; k<=n; k++) // recorrido que genera los numeros factoriales
    {
        nf *=k;
        f[k]= nf;
    cout<<f[k]<<endl;
    }  
   delete[] f;
}

