#include <stdio.h>
int main(){
    int n,left;
    scanf("%d",&n);
    left=n/4;
    for (int i = 0; i < left; i++) {
        printf("long ");
    }
    printf("int\n");

    return 0;
}