#include <stdio.h>

int main(){
    float bil_1, bil_2;
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &bil_1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &bil_2);


    printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah %.2f",bil_1,bil_2, bil_1 + bil_2);

}