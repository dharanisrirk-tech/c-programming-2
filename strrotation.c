#include<stdio.h>
#include<string.h>
int main() {
    char s1[]="abcd";
    char s2[]="cdab";
    char temp[20];
    if (strlen(s1) != strlen(s2)) {
        printf("false");
    }
    strcpy(temp, s1);
    strcat(temp, s1);
    if (strstr(temp,s2) != NULL) {
        printf("true");
    }
    else {
        printf("false");
    }
}