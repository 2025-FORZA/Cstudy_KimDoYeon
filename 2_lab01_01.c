#include <stdio.h>
#include <string.h> 


int dp[41][2];


void fib_count(int n) {
    
    if (dp[n][0] != -1) {
        return;
    }

   
    fib_count(n - 1);
    fib_count(n - 2);

    
    dp[n][0] = dp[n - 1][0] + dp[n - 2][0];
    dp[n][1] = dp[n - 1][1] + dp[n - 2][1];
}

int main() {
    
    memset(dp, -1, sizeof(dp));

    
    dp[0][0] = 1;
    dp[0][1] = 0;
    dp[1][0] = 0;
    dp[1][1] = 1;

    int T; 
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        int N;
        scanf("%d", &N);

       
        if (dp[N][0] == -1) {
             fib_count(N);
        }
        
       
        printf("%d %d\n", dp[N][0], dp[N][1]);
    }

    return 0;
}
    