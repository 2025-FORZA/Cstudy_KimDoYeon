#include <stdio.h>
int main(){
    int a,b;
    int min,max;
    scanf("%d\n",&a);
    scanf("%d", &b);
    min=max=b;
    for (int i=1; i<a; i++){
       scanf("%d",&b);
       if (b<min) min = b;
       if (b>max) max = b;
       
    
    }
    printf("%d %d\n",min,max);
    
    
    
    return 0;
}