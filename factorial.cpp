#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;

void relleno(int n, float *f);
    
int main(){
    
   int n;
   cout << "numero: ";
   cin >> n;
 
   float *Matriz = new float[n];
   relleno(n, Matriz);
    
    return 0;
}


void relleno(int n, float *f)
{
    int k; 
    float nf;
    nf = 1;
    for (k=1; k<=n; k++)
    {
        nf *=k;
        f[k]= nf;
    cout<<f[k]<<endl;
    }  
    
}