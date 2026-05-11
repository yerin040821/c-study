#include <stdio.h>

void Is_right_date(int m, int d) {
    int dates[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if (m > 12 || m < 1) {
        printf("No");
        return;
    }

    if (dates[m-1] >= d && d > 0) printf("Yes");
    else printf("No");
}

int main() {
    // Please write your code here.
    int m, d;
    scanf("%d %d", &m, &d);

    Is_right_date(m, d);

    return 0;
}