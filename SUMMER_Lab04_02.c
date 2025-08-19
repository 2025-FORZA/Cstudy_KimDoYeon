#include <stdio.h>

int main() {
    int a, mod[42]={0}, count=0;

    for (int i=0; i<10; i++) {
        scanf("%d", &a);
        mod[a%42] = 1;  
    }

    for (int i=0; i<42; i++) {
        if (mod[i]==1) count++;  
    }

    printf("%d\n",count);
    return 0;
}