#include <stdio.h>
#include <string.h>
int main(){
    int k;
    char s[203];
    scanf("%d", &k);
    scanf("%s", s);
    
    int n=strlen(s);
    int rows=n/k;
    char res[203];
    int pos=0;
    for (int c=0; c<k; c++){
        for (int r=0; r<rows; r++){
            int idx;
            if (r%2==0){
                idx=r*k+c;
            }else{
                idx=r*k+(k-1-c);
            }
            res[pos++]=s[idx];
        }
    }
    res[pos]='\0';
    printf("%s\n",res);
    
    
    
   return 0;
}