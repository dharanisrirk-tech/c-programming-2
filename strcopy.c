#include <ctype.h>
#include<stdio.h>
#include<string.h>
int main() {
    char s1[100];
    char s2[100];
    int i;
    fgets(s1,sizeof(s1), stdin);
    for (int i=0; s1[i]!='\0'; i++) {
        s2[i] = s1[i];
    }
    printf("%s", s2);
    return 0;
}