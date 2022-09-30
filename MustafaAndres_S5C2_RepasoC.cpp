#include <cstdlib>
#include<iostream>
#include<cmath>
#include<fstream>
#include<windows.h>
using namespace std;

void exp(float mivarflotante, int mivarentera){
  float potencia = pow(mivarflotante,mivarentera);
  cout << potencia << "\n";
  }
void imprimir();
  
 
int main() {
  int MyNum=69;
  double MyDec=8.8;
  cout << "La primera tiene un valor de: " << MyNum << " y la segunda tiene un valor de: " << MyDec << "\n";
  cout << "El resultado es: " << MyDec/MyNum << "\n";
  int Arreglo [300];
    
  for (int i=0;i<300; i++) {
    Arreglo[i] = rand()%900;
  }

  for (int i=0;i<300; i++) {
    cout << Arreglo[i] << ", ";
  }
    
  cout << "\n";
  cout << Arreglo[4] << "\n";
  int LongArreglo = sizeof(Arreglo)/sizeof(int);
  cout << "La longitud del arreglo es: " << LongArreglo << "\n";
    
  exp(17.5 , 5);
    
  int Menor = Arreglo[0];
  for (int i=0;i<300; i++) {
     if (Menor> Arreglo[i]){
         Menor = Arreglo[i];
      }
   }
  cout << "El menor es: " << Menor << "\n";
  
  int i=0;
  while (Arreglo[i] <801);{
      if (Arreglo[i]%2 != 0){
          cout << Arreglo[i] << ", ";
      }
      i++;
  }
  void imprimir(){
    ofstream archivo;
    archivo.open('imprimir.dat',ios::out);
    for (int i=0;i<300; i++) {
    archivo << Arreglo[i] << ", ";
  }
    int i=0;
  while (Arreglo[i] <801);{
      if (Arreglo[i]%2 != 0){
          archivo << Arreglo[i] << ", ";
      }
      i++;
} 
 
  
