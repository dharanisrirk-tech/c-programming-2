#include <stdio.h>
int main() {
    char str[100];
    char *ptr;
    int count = 0;
    int word = 0;
    fgets(str, 100, stdin);
    ptr = str;
    while (*ptr != '\0') {
        if (*ptr == '\n') {
            *ptr = '\0';
            break;
        }
        if (*ptr == ' ')
            count++;
        ptr++;
    }
    word = count + 1;
    printf("%d", word);
    return 0;
}


