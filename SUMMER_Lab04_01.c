#include <stdio.h>
int main(){
    int a,b=0,k=0;
    int i=1;
    while(i<=9){
        scanf("%d", &a);
        if (a<=0 && a>=100){
            continue;
        }
       
        if (a>b){
          b=a;
          k=i;
        }
       i++; 
    }
    printf("%d\n%d", b, k);
    
    return 0;
    
}
