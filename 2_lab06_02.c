#include <stdio.h>

int main() {
    int i;
    int A[3], B[3];

    int a, b;
    scanf("%d %d", &a, &b);

    A[0] = a / 100;
    A[1] = (a / 10) % 10;
    A[2] = a % 10;

    B[0] = b / 100;
    B[1] = (b / 10) % 10;
    B[2] = b % 10;

 
    int k = A[0];
    A[0] = A[2];
    A[2] = k;

    int t = B[0];
    B[0] = B[2];
    B[2] = t;

   
    int revA = A[0] * 100 + A[1] * 10 + A[2];
    int revB = B[0] * 100 + B[1] * 10 + B[2];

    
    if (revA > revB) {
        printf("%d\n", revA);
    } else {
        printf("%d\n", revB);
    }

    return 0;
}