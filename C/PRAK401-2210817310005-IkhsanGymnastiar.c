#include <stdio.h>
int main(){
          int i, bil ;
          char simbol;
printf("Masukkan nilai dan simbol : "); scanf("%d %c", &bil, &simbol );
          for (i = 1; i <51; i ++){
if(i %bil == 0 ){
printf("%c ",simbol);
}else{
printf("%d ", i);        
}
}
 return 0;}