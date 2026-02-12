#include <stdio.h>
#include<string.h>
int main() {
    char password[100];
    int i = 0,upperCase = 0;
    scanf("%s", password);
    while (password[i] != '\0') {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            upperCase = 1;
            break;
        }
        i++;
    }
    if (upperCase)
        printf("Valid");
    else
        printf("Invalid");
    return 0;
}
