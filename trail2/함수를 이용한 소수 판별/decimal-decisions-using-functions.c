#include <stdio.h>

int Is_Prime(int n) {
    for(int i = 2; i < n; i++) {
        if(n % i == 0) return 0;
    }
    return 1;
}

void Sum_Prime(int a, int b) {
    int sum = 0;
    for (int i = a; i <= b; i++) {
        if (Is_Prime(i)) sum += i;
    }
    printf("%d", sum);
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    Sum_Prime(a, b);

    return 0;
}