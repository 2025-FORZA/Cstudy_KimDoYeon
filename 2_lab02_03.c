#include <stdio.h>
int main(){
    char str[1000001];
    int count =0;
    int inword=0;
    
    fgets(str,sizeof(str),stdin);
    for (int i=0; str[i]!='\0'; i++){
        if (str[i]!=' ' && str[i]!='\n'){
            if (inword==0){
                count++;
                inword=1;
            }
        }else{
            inword=0;
        }
        
    }
    
    
    
    printf("%d\n",count);
    return 0;
}