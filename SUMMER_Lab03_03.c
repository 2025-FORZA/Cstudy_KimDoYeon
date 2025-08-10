#include <stdio.h>
int main(){
    int a;
    scanf("%d", &a);
    int n2;
    scanf("%d",&n2);
    int d=n2%10;
    int c=(n2/10)%10;
    int b=n2/100;
    
    int ad=a*d;
    int ac=a*c;
    int ab=a*b;
    
    int full = a*n2;
    printf("%d\n",ad);
    printf("%d\n",ac);
    printf("%d\n",ab);
    printf("%d\n",full);
          
        
    
    
    
    
    return 0;
}