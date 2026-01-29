#include <stdio.h>
int main() {
    int N, j, count = 0, prime;
    scanf("%d", &N);
    for (int i = 2; i <= N; i++) {
        prime = 1;
        for (j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                prime = 0;
                break;
            }
        }
        if (prime == 1) {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}