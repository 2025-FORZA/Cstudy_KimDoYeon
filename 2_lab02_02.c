#include <stdio.h>
int main(){
    int a,b;
    int char1[100][100];
    int char2[100][100];
    int char3[100][100];
    int N,M,i=0,j=0;
    scanf("%d %d",&M,&N);
    if (M==0 || N==0){
        return 0;
    }
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            scanf("%d",&char1[i][j]);
           
        }
    }
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            scanf("%d",&char2[i][j]);
           
        }
    }
    for (int i=0; i<M; i++){
        for (int j=0; j<N; j++){
            char3[i][j]=char1[i][j]+char2[i][j];
            printf("%d",char3[i][j]);
            if (j < N - 1) printf(" "); 
        }
        printf("\n");
    }
    
    
    return 0;
}