#include <stdio.h>
int main(){
    for(int c=0; c<=3; c++){
    int aa,bb,i,j;
    scanf("%d %d", &aa, &bb);
    if(aa<bb){
        for(i=aa, j=bb; i<=bb, j>=aa; i++, j--){
            printf("%d %d", i, j);
            if(i == bb)
                break;
            else{printf(" - ");}}
 }else{
        for(i=aa, j=bb; i>=bb, j<=aa; i--, j++){
            printf("%d %d", i, j);
            if(i == bb)
                break;
            else{printf(" - ");}}
    }}
return 0;}