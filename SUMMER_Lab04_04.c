#include <stdio.h>

int main(){
   int score[1000];
   int num;
   scanf("%d",&num);
   if (num>1000){
       return 0;
   }
   int b=0;
   for (int i=0; i<num; i++){
       scanf("%d",&score[i]);
       if (score[i]>b){
           b=score[i];
       }}
   double sum=0;
   for (int i=0; i<num; i++){
       sum+=((double)score[i]/b)*100;
   }
   double total=sum/num;
   printf("%f\n",total);
   
   return 0;
}