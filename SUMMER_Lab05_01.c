#include <stdio.h>
int main(){
    int a;
    int b=1;
 
    scanf("%d",&a);
    if (a<0 || a>12){
        return 0;
    }
    if (a==0){
        printf("%d\n",1);
        return 0;
    }
    for (int i=1; i<=a; i++){
        
         b*=i; }  
    printf("%d",b);
    
    
    
    
    return 0;
}