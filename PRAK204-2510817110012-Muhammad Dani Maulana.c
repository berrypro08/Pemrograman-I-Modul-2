#include <stdio.h>
#include <math.h>

int main(){
float r, h;
printf("Masukkan Jari-Jari: ");
scanf("%f", &r);
printf("Masukkan Tinggi: ");
scanf("%f", &h);

float V, L, K;
V = (22 * pow(r,2) * h)/7;
L = (2*22*r*(r + h))/7;
K = 2*22*r/7;
printf("%.2f\n",V);
printf("%.2f\n",L);
printf("%.2f",K);
return 0;
}
