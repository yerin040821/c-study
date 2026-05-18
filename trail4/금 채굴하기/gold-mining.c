#include <stdio.h>
#include <stdlib.h>

int main() {
    // Please write your code here.
    int n, m, cost=0;
    int a[20][20];
    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    int max_gold = 0;
    for (int k=0; k<=n; k++) {
        cost = k*k + (k+1)*(k+1);
        
        for (int i=0; i<n; i++) {
            for (int j=0; j<n; j++) {
                int gold_count = 0;

                for (int dr = -k; dr <= k; dr++) {
                    int dc_max = k - abs(dr); 
                    
                    for (int dc = -dc_max; dc <= dc_max; dc++) {
                        int r = i + dr; 
                        int c = j + dc;

                        if (r >= 0 && r < n && c >= 0 && c < n) {
                            if (a[r][c] == 1) gold_count++;
                        } 
                    }
                }

                int gold = gold_count * m;
                if (gold >= cost && gold_count > max_gold) max_gold = gold_count;
            }
        }
    }

    printf("%d", max_gold);

    return 0;
}