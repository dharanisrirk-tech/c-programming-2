#include <stdio.h>
int main() {
    int n, a, decimal = 0, binary = 1;
    scanf("%d", &n);
    for (int i=0; n > 0; n = n / 10) {
        a = n % 10;
        decimal = decimal + a * binary;
        binary = binary * 2;
    }
    printf("%d", decimal);
    return 0;
}