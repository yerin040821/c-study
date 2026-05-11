#include <stdio.h>

int Is369 (int i) {
    int tmp;
    for(int j = i; j > 0; j /= 10) {
        tmp = j % 10;
        if (tmp == 3 || tmp == 6 || tmp == 9) return 1;
    }
    return 0;
}

void count(int a, int b) {
    int count = 0;
    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 || Is369(i)) count++;
    }
    printf("%d", count);
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    count(a, b);

    return 0;
}