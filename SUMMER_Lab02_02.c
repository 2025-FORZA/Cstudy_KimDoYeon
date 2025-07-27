#include <stdio.h>
int main(){
    int list[5];
    for (int i=0; i<5; i++){
        scanf("%d", &list[i]);
    }
    int sorted =0;
    while (!sorted){
        sorted=1;
        for (int n=0; n<4; n++){
            if (list[n]>list[n+1]){
              int p=list[n];
              list[n]=list[n+1];
              list[n+1]=p;
              sorted=0;
              for (int i=0; i<5; i++){
                  printf("%d ", list[i]);
              }
              printf("\n");    
          } 
            
        }
        
        
        
        
        
    }
    
    
    return 0;
}