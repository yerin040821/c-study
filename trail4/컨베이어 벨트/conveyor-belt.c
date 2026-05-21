#include <stdio.h>

int main() {
    // Please write your code here.
    int n, t;
    int a[2][200];

    scanf("%d %d", &n, &t);
    for (int i=0; i<2; i++) {
        for (int j=0; j<n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i=0; i<t; i++) {
        int temp0 = a[0][n-1];
        int temp1 = a[1][n-1];
        
        for (int j=n-1; j>=1; j--) {
            a[0][j] = a[0][j-1];
            a[1][j] = a[1][j-1];
        }

        a[1][0] = temp0;
        a[0][0] = temp1;
    }
    
    for (int i=0; i<2; i++) {
        for (int j=0; j<n; j++) printf("%d ", a[i][j]);
        printf("\n");
    }

    return 0;
}