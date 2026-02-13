#include<stdio.h>
#include<string.h>
int main() {
    char str[100];
    int i;
    fgets(str,100,stdin);
    char target;
    scanf("%c",&target);
    int index =-1;
    for(i=0;i<strlen(str);i++) {
        if(target==str[i]) {
            index=i;
            break;

        }
    }
    printf("%d",index);
    return 0;
}