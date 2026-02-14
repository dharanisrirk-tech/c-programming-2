#include <stdio.h>
int digit(char str[]) {
    int count=0;
    for (int i=0; str[i]!='\0'; i++) {
        if (str[i]>='0' && str[i]<='9') {
            count++;
        }
    }
    return count;
}
int main() {
    char str[20];
    fgets(str, sizeof(str), stdin);
    int count=digit(str);
    printf("%d", count);
    return 0;
}