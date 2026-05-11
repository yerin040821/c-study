#include <stdio.h>

void min(int a, int b, int c) {
    int min = a;
    if (min > b) min = b;
    if (min > c) min = c;

    printf("%d", min);
}

int main() {
    // Please write your code here.
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);    
    min(a, b, c);

    return 0;
}