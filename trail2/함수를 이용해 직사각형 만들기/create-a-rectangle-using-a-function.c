#include <stdio.h>

void PrintRect(int n, int m) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) printf("1");
        printf("\n");
    }
}

int main() {
    // Please write your code here.
    int n, m;
    scanf("%d %d", &n, &m);
    PrintRect(n, m);

    return 0;
}