#include <stdio.h>
int main(){
    int a;
    
    int list[1000];
    float sum=0;
    scanf("%d",&a);
    
    for (int i=0; i<a; i++){
        scanf("%d",&list[i]);
    }
    int max=list[0];
    for (int i=0; i<a; i++){
       if (list[i]>max){
         max=list[i];
    }  
    }
    for (int i=0; i<a; i++){
         sum+=((float)list[i]/max)*100;
    }
    printf("%f\n",sum/a);
    return 0;
    
}