#include <stdio.h>

void power(int a, int b) {
    int pow = 1;
    for(int i = 0; i < b; i++) pow *= a;
    printf("%d", pow);
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);
    power(a, b);

    return 0;
}