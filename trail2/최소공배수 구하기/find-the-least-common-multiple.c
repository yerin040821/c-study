#include <stdio.h>

void LCM(int a, int b) {
    int gcd;
    for(int num=1; num<=b; num++) {
        if(a%num==0 && b%num==0) {
            gcd = num;
        }
    }

    printf("%d", (a*b)/gcd);
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    
    // Please write your code here.
    LCM(n, m);
    
    return 0;
}