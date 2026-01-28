#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int reverse=0;
    for (;N!=0;N/=10) {
        reverse=reverse*10+(N%10);
    }
    printf("%d",reverse);
return 0;
}