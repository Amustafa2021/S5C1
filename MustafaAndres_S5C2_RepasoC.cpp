#include <cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

void exp(float mivarflotante, int mivarentera){
  float potencia = pow(mivarflotante,mivarentera);
  cout << potencia << "\n";
  }

int main() {
  int MyNum=69;
  double MyDec=8.8;
  cout << "La primera tiene un valor de " << MyNum << " y la segunda tiene un valor de " << MyDec << "\n";
  cout << "El resultado es " << MyDec/MyNum << "\n";
  int Arreglo [300];
  
  for (int i=0;i<300; i++) {
    Arreglo[i] = rand()%900;
  }

  for (int i=0;i<300; i++) {
    cout << Arreglo[i] << " ";
  }
    
  cout << "\n";
  cout << Arreglo[4] << "\n";
  int LongArreglo = sizeof(Arreglo)/sizeof(int);
  cout << "La longitud del arreglo es " << LongArreglo << "\n";
  exp(17.5 , 5);
} 
 
  
