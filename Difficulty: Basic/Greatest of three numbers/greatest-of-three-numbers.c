#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int maxVal = a;
    if (b > maxVal)
        maxVal = b;
    if (c > maxVal)
        maxVal = c;

    printf("%d\n", maxVal);
    return 0;
}