#include <stdio.h>
int main(){
    int k;
    scanf("%d",&k);
    getchar();
    for(int i=1;i<=k;i++){
        int count=0,sum=0;
        char a,b='X';
        while((a=getchar())!='\n'){
            if(a=='O'){
                if(b=='O') count++;
                else count=1;
                sum+=count;
                b='O';
            } else {
                count=0;
                b='X';
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}