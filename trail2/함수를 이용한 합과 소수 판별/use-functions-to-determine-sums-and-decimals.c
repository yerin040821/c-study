#include <stdio.h>

int Is_Prime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int digit_sum_even(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum % 2 == 0;
}

void even_num(int a, int b) {
    int cnt = 0;
    for (int i = a; i <= b; i++) {
        if (Is_Prime(i) && digit_sum_even(i)) cnt++;
    }
    printf("%d", cnt);
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    even_num(a, b);

    return 0;
}