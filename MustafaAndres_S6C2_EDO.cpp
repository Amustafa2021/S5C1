#include <cstdlib>
#include<iostream>
#include<cmath>
#include<math.h>
#include<stdio.h>
using namespace std;

double analitica(double t, double y){
  return exp(-t);
}

double yprima(double t, double y){
  return -y;
}

double euler(double t0, double y0, double tf, double h){
  double y = y0;
  double t = t0;
  double e;
  do{
    e = 100*abs(y-analitica(t,y))/analitica(t,y);
    cout << e << " ";
    y = y + h*yprima(t,y);
    t = t + h;
  }while(t<tf);
}
 
int main(){
  euler (0,1,1,0.1);
  cout << endl;
  euler (0,1,1,0.01);
}
