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

double rungekuttafourthdegree(double t0, double y0, double tf, double h){
  double y = y0;
  double t = t0;
  double ka;
  double kb;
  double kc;
  double kd;  
  double e;
  do{
    e = 100*abs(y-analitica(t,y))/analitica(t,y);
    cout << e << " ";
    ka =  h*yprima(t,y);
    kb =  h*yprima(t+h/2,y+ka/2);
    kc =  h*yprima(t+h/2,y+kb/2);
    kd =  h*yprima(t+h,y+kc);  
    y = y + (ka+2*kb+2*kc+kd)/6;
    t = t + h;
  }while(t<tf);
}


int main(){
  euler (0,1,1,0.1);
  cout << endl;
  euler (0,1,1,0.01);
  cout << endl;
  rungekuttafourthdegree(0,1,1,0.1);
  cout << endl;
  rungekuttafourthdegree(0,1,1,0.01);
}
