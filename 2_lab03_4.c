#include <stdio.h>
int main(){
    unsigned long long x;
    short n;
    unsigned long a;
    short b;
    int sum=0;
    scanf("%llu %hd",&x,&n);
    if (x>1000000000 || n<1 || n>100){
        return 0;
    }
    
    for (int i=1; i<=n; i++){
        scanf("%lu %hd",&a,&b);
        if (a>1000000 || b>10 || b<1){
            return 0;
        }
        sum+=(a*b);
    }
    if (x==sum){
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}