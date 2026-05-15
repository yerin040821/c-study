#include <stdio.h>
#define MAX_SIZE 210

int n, m;
int grid[MAX_SIZE][MAX_SIZE];

int check_bent_block() {
    int tmp1, tmp2, tmp3, tmp4, max = 0;
    // 행 체크
    for (int i=0; i<n-1; i++) {
        for (int j=0; j<m-1; j++) {
            tmp1 = grid[i][j] + grid[i][j+1] + grid[i+1][j];
            tmp2 = grid[i][j] + grid[i][j+1] + grid[i+1][j+1];
            tmp3 = grid[i][j] + grid[i+1][j] + grid[i+1][j+1];
            tmp4 = grid[i+1][j] + grid[i+1][j+1] + grid[i][j+1];
            if (tmp1 > max) max = tmp1;
            if (tmp2 > max) max = tmp2;
            if (tmp3 > max) max = tmp3;
            if (tmp4 > max) max = tmp4;
        }
    }

    return max;
}

int check_straight_block() {
    int tmp, max = 0;
    // 행 체크
    for (int i=0; i<n; i++) {
        for (int j=0; j<m-2; j++) {
            tmp = grid[i][j] + grid[i][j+1] + grid[i][j+2];
            if (tmp > max) max = tmp;
        }
    }

    // 열 체크
    for (int j=0; j<m; j++) {
        for (int i=0; i<n-2; i++) {
            tmp = grid[i][j] + grid[i+1][j] + grid[i+2][j];
            if (tmp > max) max = tmp;
        }
    }

    return max;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf("%d", &grid[i][j]);
        }
    }
    
    // Please write your code here.
    int bent_max = check_bent_block();
    int straight_max = check_straight_block();
    int result = (bent_max > straight_max)? bent_max : straight_max;

    printf("%d", result);
    
    return 0;
}