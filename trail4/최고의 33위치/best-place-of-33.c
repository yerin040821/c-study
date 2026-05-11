#include <stdio.h>

int grid[20][20];
int n;

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    
    // Please write your code here.
    int max = 0;
    
    for (int i = 0; i <= n-3; i++) {
        for (int j = 0; j <= n-3; j++) {
            int sum = 0;
            for (int di = 0; di < 3; di++) {
                for (int dj = 0; dj < 3; dj++) sum += grid[i+di][j+dj];
            }
            
            if (sum > max) max = sum;
        }
    }

    printf("%d", max);
    
    return 0;
}