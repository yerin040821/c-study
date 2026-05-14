#include <stdio.h>

int n, m;
int a[100][100];
int seq[100];

int is_happy() {
    if (m==1) return 1;
    int count = 1;
    int max_count = 1;

    for (int i=1; i<n; i++) {
        if (seq[i]==seq[i-1]) count++;
        else count = 1;
        if (count > max_count) max_count = count;
    }

    return m <= max_count;
}

int main() {
    int total_happy = 0;

    scanf("%d %d", &n, &m);

    for (int i=0; i<n; i++)
        for (int j=0; j<n; j++)
            scanf("%d", &a[i][j]);
    
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) seq[j] = a[i][j];
        if (is_happy()) total_happy++; 
    }

    for (int j=0; j<n; j++) {
        for (int i=0; i<n; i++) seq[i] = a[i][j];
        if (is_happy()) total_happy++;
    }
    
    printf("%d", total_happy);

    return 0;
}