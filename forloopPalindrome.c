#include <stdio.h>
int main() {
    int N, temp, digit, rev = 0;
    scanf("%d", &N);
    temp = N;
    for (int i=0; N > 0; N = N / 10) {
        digit = N % 10;
        rev = rev * 10 + digit;
    }
    if (rev == temp)
        printf("Yes");
    else
        printf("No");
    return 0;
}
