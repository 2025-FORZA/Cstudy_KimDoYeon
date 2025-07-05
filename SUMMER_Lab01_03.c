#include <stdio.h>

int main() {
    int a, b, c, d;
    scanf("%d %d", &a, &b);  

    int alist[a];  
    int count = 0;
    for (int i = 1; i <= a; i++) {
        alist[count] = i;
        count++;
    }

   
    for (int j = 1; j <= b; j++) {
        scanf("%d %d", &c, &d);  

      
        int left = c - 1;
        int right = d - 1;

        
        while (left < right) {
            int temp = alist[left];
            alist[left] = alist[right];
            alist[right] = temp;
            left++;
            right--;
        }
    }

    
    for (int i = 0; i < a; i++) {
        printf("%d ", alist[i]);
    }

    return 0;
}