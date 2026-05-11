#include <stdio.h>

int n1, n2;
int a[100], b[100];

void sub_array(int a[], int b[], int n1, int n2) {
    for (int i = 0; i <= n1-n2; i++) {
        int match = 1;
        for (int j = 0; j < n2; j++) {
            if (a[i+j] != b[j]) {
                match = 0;
                break;
            }
        }
        if (match) {
            printf("Yes");
            return;
        }
    }
    printf("No");
}

int main() {
    scanf("%d %d", &n1, &n2);
    for (int i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    for (int j = 0; j < n2; j++)
        scanf("%d", &b[j]);
    
    // Please write your code here.
    sub_array(a, b, n1, n2);
    
    return 0;
}