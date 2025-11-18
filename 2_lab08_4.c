#include <stdio.h>
int main(){
    int N,k;
    scanf("%d %d",&N,&k);
    int a[N];
    for (int i=0; i<N; i++){
        scanf("%d",&a[i]);}
    int max=-1000000;
    for (int i=0; i<=N-k; i++){
        int sum=0;
        for (int j=0; j<k; j++){
            sum+=a[i+j];}
            
        if (i==0 || sum>max){
            max=sum;}}
    printf("%d",max);
    return 0;}
        
    
    
