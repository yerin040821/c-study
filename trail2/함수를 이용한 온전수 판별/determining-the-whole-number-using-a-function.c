#include <stdio.h>

int onjeonsu(int a, int b) {
    int cnt = 0;
    
    for(int i = a; i <= b; i++) {
        if (i % 2 != 0 && i % 10 !=5 && !(i % 3 == 0 && i % 9 != 0)) cnt++;
    }

    printf("%d", cnt);
}

int main() {
    // Please write your code here.
    int a, b;
    scanf("%d %d", &a, &b);

    onjeonsu(a, b);

    return 0;
}