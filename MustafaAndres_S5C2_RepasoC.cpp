#include <cstdlib>
#include<iostream>
#include<cmath>
using namespace std;

void exp(float mivarflotante, int mivarentera){
  float suma = mivarflotante;
  for (int i=0; i<mivarentera; i++) {
    float suma = suma*mivarflotante;
  }
  cout << suma;
  }

int main() {
  int MyNum=69;
  double MyDec=8.8;
  cout << "La primera tiene un valor de " << MyNum << " y la segunda tiene un valor de" << MyDec;
  cout << "El resultado es " << MyDec/MyNum;
  int Arreglo [300];
  
  for (int i=0;i<300; i++) {
    Arreglo[i] = rand()%900;
  }

  for (int i=0;i<300; i++) {
    cout << Arreglo[i] << " ";
  }
  cout << Arreglo[5];
  int LongArreglo = sizeof(Arreglo)/sizeof(int);
  
  exp(17.5 , 5);
} 
 
  
