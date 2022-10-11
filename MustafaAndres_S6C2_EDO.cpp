#include <cstdlib>
#include<iostream>
#include<cmath>
#include<math.h>
#include<stdio.h>
using namespace std;

double analítica(double t, double y){
  return exp(-t);
}

double yprima(double t, double y){
  return -y;
}

double euler(double t0, double y0, double tf, double h){
  double y = y0;
  double t = t0;
  double h = h;
  double tf = tf;
  double e;
  do{
    cout << y << " ";
    e = 100*(y-analítica(t,y))/analítica(t,y);
    cout << e << " ";
    y = y0 + h*yprima(t,y);
    t = t0 + h;
  }while(t<=tf);
}
 
int main(){
  euler (0,1,1,0.1);
  euler (0,1,1,0.1);
}
