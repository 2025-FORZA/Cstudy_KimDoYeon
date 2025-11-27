#include <stdio.h>
int main(){
    int try;
    int a,b;
    scanf("%d",&try);
    for (int i=0; i<try; i++){
        scanf("%d %d",&a,&b);
        printf("Case #%d: %d + %d = %d\n",i+1,a,b,(a+b));
    }
    return 0;}
