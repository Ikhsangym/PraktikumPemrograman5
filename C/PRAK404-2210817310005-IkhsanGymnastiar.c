#include <stdio.h>
int main(){
          float opsi, b1, b2;
          while (1){
          printf("pilih program\n");printf("1. penjumlahan\n");printf("2. pengurangan\n");printf("3. perkalian\n");printf("4. penjumlahan\n");printf("5. exit\n");printf("Masukkan pilihan : "); scanf("%f", &opsi);
          if(opsi ==5){
                    printf("Terimakasih, telah menggunakan kalkulator Ikhsan Gymnastiar\n");break;
          }else if(opsi>5 ){
                    printf("Input anda salah, silahkan coba lagi\n");continue;}
          printf("Masukkan Bilangan Pertama : "); scanf("%f",&b1);
          printf("Masukkan Bilangan Kedua : "); scanf("%f",&b2);
          if(opsi == 1){
                    printf("Hasil penjumlahan antara %.2f dengan %.2f adalah %.2f\n", b1, b2, b1+b2);
          }else if(opsi == 2){
                     printf("Hasil pengurangan antara %.2f dengan %.2f adalah %.2f\n", b1, b2, b1-b2);
          }else if(opsi == 3){
                     printf("Hasil perkalian antara %.2f dengan %.2f adalah %.2f\n", b1, b2, b1*b2);
          }else if(opsi == 4){
                     printf("Hasil pembagian antara %.2f dengan %.2f adalah %.2f\n", b1, b2, b1/b2);}}
return 0;}