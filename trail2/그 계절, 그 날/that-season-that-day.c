#include <stdio.h>

int is_leap(int y) {
    return (y % 4 == 0 && y % 100 != 0) || (y % 400 == 0);
}

int is_valid(int y, int m, int d) {
    int dates[] = {31,28,31,30,31,30,31,31,30,31,30,31};
    
    if (m < 1 || m > 12) return 0;
    if (m == 2 && is_leap(y)) dates[1] = 29; 
    if (d < 1 || d > dates[m-1]) return 0;
    
    return 1;
}

void season(int m) {
    if (m >= 3 && m <= 5) printf("Spring");
    else if (m >= 6 && m <= 8) printf("Summer");
    else if (m >= 9 && m <= 11) printf("Fall");
    else printf("Winter");
}

int main() {
    // Please write your code here.
    int y, m, d;
    scanf("%d %d %d", &y, &m, &d);

    if (!is_valid(y, m, d)) printf("-1");
    else season(m);

    return 0;
}