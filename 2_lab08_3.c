#include <stdio.h>

int main() {
    int hour, min, cook;
    scanf("%d %d", &hour, &min);  
    scanf("%d", &cook);           

    min += cook;         
    hour += min / 60;     
    min %= 60;            
    hour %= 24;           

    printf("%d %d\n", hour, min); 
    return 0;
}