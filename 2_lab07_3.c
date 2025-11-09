#include <stdio.h>
int main(){
    int a,b,list[10001],lista[10001],count=0;
    int num;
    scanf("%d %d",&a,&b);
    for (int i=0; i<a; i++){
        scanf("%d",&num);
        list[i]=num;}
    for (int i=0; i<a; i++){
        if (list[i]<b){
            lista[count]=list[i];
            count++;}}
    for (int i=0; i<count; i++)
       {printf("%d ",lista[i]);}
    return 0; }
            
    
        
