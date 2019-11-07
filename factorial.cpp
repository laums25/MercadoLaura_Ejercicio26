#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

void factorial(int n)
double relleno(int n, float **f)
    
int main(){
    
   int n;
   cout << "numero: ";
   cin >> n;
 
   float **Matriz = new float *[n];
   for(int i=0; i<n; i++){
       Matriz[i]= new float[n];
       
   }
   factorial(n);
   relleno(n, Matriz);
    
    return 0;
}

void factorial(int n){
    int i;
   long double factorial; 
   factorial=1;
   for(i=1;i<=n;i++){
        factorial = factorial * i;
   }
   cout << n << factorial << endl;
    
    
}

double relleno(int n, float **f){
    int k;
    for (k=1; k<n; k++){
        f[k]=factorial(k);
    }  
    
}