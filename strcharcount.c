#include <stdio.h>
#include<string.h>
int main() {
    char username[100];
    int count = 0;
    scanf("%s", username);
    while (username[count] != '\0') {
        count++;
    }
    printf("%d", count);
    return 0;
}
