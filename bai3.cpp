#include <stdio.h>
#include <string.h>

int main() {
    int n;
    scanf("%d", &n);
    char a[n + 1];
    scanf("%s", a);

    int count = 0;

    // Ki?m tra các v? trí t? d?u dãy d?n khi g?p bumper '>'
    for (int i = 0; i < n; i++) {
        if (a[i] == '>') {
            break;
        }
        count++;
    }

    // Ki?m tra các v? trí t? cu?i dãy d?n khi g?p bumper '<'
    for (int i = n - 1; i >= 0; i--) {
        if (a[i] == '<') {
            break;
        }
        count++;
    }

    printf("%d\n", count);
    return 0;
}
