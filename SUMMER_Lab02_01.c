#include <stdio.h>
int main(){
   int a;
   int b,c,d;
   scanf("%d",&a);
   for (int k=1; k<=a; k++){
      scanf("%d %d %d", &b,&c,&d);
      if (d>b){
        int i=1;
        while (d>b){
           d -=b;
           i++;
              
        }
        printf("%d%02d\n",d,i);        
      }else{
         printf("%d01\n",d);
          
      }
       
       
       
  }return 0;
}