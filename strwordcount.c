#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int count = 0,i=0;
    int word=0;
    fgets(str, 100, stdin);
    while(str[i]!='\0') {
        if (str[i] == ' ')
            count++;
            i++;
        word=count+1;
    }
    printf("%d", word);
    return 0;
}