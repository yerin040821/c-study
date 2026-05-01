#include <stdio.h>

void printRect(int n) {
    int num = 1;
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            printf("%d ", num);
            num++;
            if (num == 10) num = 1;
        }
        printf("\n");
    }
}

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    printRect(n);

    return 0;
}