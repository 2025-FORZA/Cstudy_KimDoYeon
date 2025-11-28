#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        int x1, y1, r1, x2, y2, r2;
        scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);

        int dx = x1 - x2;
        int dy = y1 - y2;
        int dist_sq = dx * dx + dy * dy;
        int r_sum = r1 + r2;
        int r_diff = r1 - r2;
        if (r_diff < 0) r_diff = -r_diff;

        if (dist_sq == 0) {
            if (r1 == r2) {
                printf("-1\n"); 
            } else {
                printf("0\n"); 
            }
        } else if (dist_sq == r_sum * r_sum || dist_sq == r_diff * r_diff) {
            printf("1\n"); 
        } else if (r_diff * r_diff < dist_sq && dist_sq < r_sum * r_sum) {
            printf("2\n"); 
        } else {
            printf("0\n"); 
        }
    }

    return 0;
}