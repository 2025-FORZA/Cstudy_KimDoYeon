#include <stdio.h>

int is_hansu(int n) {
    if (n<100) return 1; 
    int d1=n / 100;         
    int d2=(n / 10) % 10;   
    int d3=n % 10;          
    return (d1 - d2 == d2 - d3);
}

int main() {
    int N,count = 0;
    scanf("%d",&N);
    for (int i = 1; i <= N; i++) {
        if (is_hansu(i)) count++;
    }
    printf("%d\n",count);
    return 0;
}