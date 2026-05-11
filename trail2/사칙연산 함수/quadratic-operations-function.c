#include <stdio.h>

void result(int a, char o, int c) {
    switch(o) {
        case '+':
            printf("%d + %d = %d", a, c, a+c);
            break;
        case '-':
            printf("%d - %d = %d", a, c, a-c);
            break;
        case '/':
            printf("%d / %d = %d", a, c, a/c);
            break;
        case '*':
            printf("%d * %d = %d", a, c, a*c);
            break;
        default:
            printf("False");
            break;
    }
}

int main() {
    int a, c;
    char o;
    
    scanf("%d %c %d", &a, &o, &c);
    
    // Please write your code here.
    result(a, o, c);
    
    return 0;
}