#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", a);

    int count = 0;

    // Ki?m tra c�c v? tr� t? d?u d�y d?n khi g?p bumper '>'
    for (int i = 0; i < n; i++) {
        if (a[i] == '>') {
            break;
        }
        count++;
    }

    // Ki?m tra c�c v? tr� t? cu?i d�y d?n khi g?p bumper '<'
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == '<') {
            break;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}
