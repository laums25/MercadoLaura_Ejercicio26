// para realizar este ejercicio solo modifiqué el codigo dado en clase que se llama suma.cpp
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std; 

float * read_file(string filename, int *n_points); // se inicializan las funciones que se usaran en el ejercicio
float add_values(float *x, float *y, int n_points);

int main(){
  float *x=NULL;
  float *y=NULL;
  int n_x=0;
  int n_y=0;

  x = read_file("valores_x.txt", &n_x);
  y = read_file("valores_y.txt", &n_y);
  
  add_values(x, y, n_x);
  
  return 0;
}

float * read_file(string filename, int *n_points){
  int n_lines=0;
  ifstream infile; 
  string line;
  int i;
  float *array;

  /*cuenta lineas*/
  infile.open(filename); 
  getline(infile, line);
  while(infile){
    n_lines++;
    getline(infile, line);
  }
  infile.close();
  *n_points = n_lines;

  /*reserva la memoria necesaria*/
  array = new float[n_lines];

  /*carga los valores*/
  i=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[i] = atof(line.c_str());
    i++;
    getline(infile, line);
  }
  infile.close();

  return array;
}

float add_values(float *x, float *y, int n_points){ //en esta funcion solo la modifico para que le entren dos punteros y no uno solo como estaba en suma.cpp, en esta funcion se hace la multiplicacion posicion por posicion de los valores de x,y
  float a=0;
  int i;
  for(i=0;i<n_points;i++){
          a=x[i]*y[i]; // se realiza la multiplicacion
          cout<<a<<endl; // se imprimen los valores de la multiplicacion
      }
    
  return a;
}