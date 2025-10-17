#include <stdio.h>

int main(){
    char nama[50], ttl[50], nim[20], paralel[5], alamat[50], hobi[50], nomor[15];
    printf("INPUT DATA\n");
    printf("Nama                  : ");
    fgets(nama,50,stdin);
    printf("NIM                   : ");
    fgets(nim,20,stdin);
    printf("Kelas Paralel         : ");
    fgets(paralel,5,stdin);
    printf("Tampat/Tanggal Lahir  : ");
    fgets(ttl,50,stdin);
    printf("Alamat                : ");
    fgets(alamat,50,stdin);
    printf("Hobby                 : ");
    fgets(hobi,10,stdin);
    printf("No.HP                 : ");
    fgets(nomor,15,stdin);

    printf("\nNama                  : %s",nama);
    printf("NIM                   : %s",nim);
    printf("Kelas Paralel         : %s",paralel);
    printf("Tampat/Tanggal Lahir  : %s",ttl);
    printf("Alamat                : %s",alamat);
    printf("Hobby                 : %s",hobi);
    printf("No.HP                 : %s",nomor);
    return 0;
}