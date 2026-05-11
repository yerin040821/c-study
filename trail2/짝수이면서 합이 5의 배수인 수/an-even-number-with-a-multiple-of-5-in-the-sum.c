#include <stdio.h>

void result(int n) {
    if (n % 2 == 0 && ((n % 10)+(n / 10)) % 5 == 0) printf("Yes");
    else printf("No");
}

int main() {
    // Please write your code here.
    int n;
    scanf("%d", &n);
    result(n);

    return 0;
}