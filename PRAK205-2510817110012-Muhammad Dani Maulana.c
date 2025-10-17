#include <stdio.h>
#include <math.h>

int main(){
    int tinggi, miring, alas, K, L;
    printf("Masukkan Sisi A: ");
    scanf("%d", &tinggi);
    printf("Masukkan Sisi B: ");
    scanf("%d", &miring);

    alas = sqrt(pow(miring,2) - pow(tinggi,2));
    K = alas + tinggi + miring;
    L = alas * tinggi / 2;
    printf("Alas: %d cm\n",alas);
    printf("Tinggi: %d cm\n",tinggi);
    printf("Keliling: %d cm\n",K);
    printf("Luas: %d cm^2",L);
    return 0;
}