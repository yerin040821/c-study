#include <stdio.h>

void GCD(int a, int b) {
    int gcd = 0;
    for(int num=1; num<=b; num++) {
        if(a%num==0 && b%num==0) gcd=num;
    }
    printf("%d", gcd);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    // Please write your code here.
    GCD(n, m);
    
    return 0;
}