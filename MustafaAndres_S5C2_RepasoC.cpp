#include <cstdlib>
#include<iostream>
#include<cmath>
#include<fstream>

using namespace std;

void exp(float mivarflotante, int mivarentera){
  float potencia = pow(mivarflotante,mivarentera);
  cout << potencia << "\n";
  }

  
 
int main() {
  int MyNum=69;
  double MyDec=8.8;
  cout << "La primera tiene un valor de: " << MyNum << " y la segunda tiene un valor de: " << MyDec << "\n";
  cout << "El resultado es: " << MyDec/MyNum << "\n";
  int Arreglo [300];

  ofstream archivo("aleatorios.txt");
  for (int i=0;i<300; i++) {
    Arreglo[i] = rand()%900;
    cout << Arreglo[i] << ", ";
    archivo << Arreglo[i] << ", ";
  }
    archivo.close();

    
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
  ofstream archiv("aleatorios_con_pares.txt");
  for (int i=0;i<300; i++) {
    if (Arreglo[i]%2 != 0){
  archiv << Arreglo[i] << ", ";
    }
  }
  archiv.close();
}
  
