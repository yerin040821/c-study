#include <stdio.h>

int main() {
    // Please write your code here.
    int n, a[20][20];
    scanf("%d", &n);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max_sum = 0;

    for (int i=2; i<n; i++) {
        for (int j=1; j<n-1; j++) {
            for (int k1=1; k1<n; k1++) { // 우상향, 좌하향 칸 수
                for (int k2=1; k2<n; k2++) { // 좌상향, 우하향 칸 수
                    int r = i;
                    int c = j;
                    int sum = 0;
                    int is_possible = 1;

                    for (int s=0; s<k1; s++) { // 1: 우상향
                        r--;
                        c++;
                        if (r < 0 || r >= n || c < 0 || c >= n) {
                            is_possible = 0;
                            break;
                        }
                        sum += a[r][c];                       
                    }

                    for (int s=0; s<k2; s++) { // 2: 좌상향
                        r--;
                        c--;
                        if (r < 0 || r >= n || c < 0 || c >= n) {
                            is_possible = 0;
                            break;
                        }
                        sum += a[r][c];   
                    }

                    for (int s=0; s<k1; s++) { // 3: 좌하향
                        r++;
                        c--;
                        if (r < 0 || r >= n || c < 0 || c >= n) {
                            is_possible = 0;
                            break;
                        }
                        sum += a[r][c];                       
                    }

                    for (int s=0; s<k2; s++) { // 2: 우상향
                        r++;
                        c++;
                        if (r < 0 || r >= n || c < 0 || c >= n) {
                            is_possible = 0;
                            break;
                        }
                        sum += a[r][c];   
                    }
 
                    if (is_possible && sum > max_sum) max_sum = sum;
                }
                
            }
        }
    }

    printf("%d", max_sum);

    return 0;
}