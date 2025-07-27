#include <stdio.h>

int main(){
    char word[101];
    int i=0;
    int count=0;
    
    scanf("%s", word);
    while (word[i]!='\0'){
        if (word[i]=='d' && word[i+1]=='z' && word[i+2]=='='){
            count++;
            i+=3;
        }
        else if ((word[i]=='c' && (word[i+1]=='=' || word [i+1]=='-'))||
                 (word[i]=='d' && word[i+1]=='-')||
                 (word[i]=='l' && word[i+1]=='j')||
                 (word[i]=='n' && word[i+1]=='j')||
                 (word[i]=='s' && word[i+1]=='=')||
                 (word[i]=='z' && word[i+1]=='=')){
          count++;
          i+=2;
        }
        else{
            count++;
            i+=1;
        }
    }
    printf("%d\n", count);
    return 0;
}

