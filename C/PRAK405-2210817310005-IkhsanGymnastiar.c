#include <stdio.h>
int main(){
           int b1, b2, hasil, hasilakhir, i ,j ;
scanf("%d %d",&b1 ,&b2 );
     for (int i = 0; i < b1; i++){
          for(int j = i; j>=0; j-- ){
                    printf("(%d * %d)", j+1, b2);
                    if(j>0){
                    printf(" + ");}}
          hasil += (i+1) * b2;
          printf(" = %d\n", hasil);
          hasilakhir += hasil;}
     printf("%d", hasilakhir);
return 0;}