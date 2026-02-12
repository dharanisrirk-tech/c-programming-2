#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    int  length;
    printf("Enter the value: ");
    scanf("%s", str);
    length = strlen(str);
    printf("Reversed string: ");
    for(int i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }
    return 0;
}