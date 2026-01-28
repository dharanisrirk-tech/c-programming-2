#include<stdio.h>
int main() {
    int N,M;
    scanf("%d %d",&N,&M);
    int power=1;
    for (int i=1;i<=M;i++) {
        power*=N;
    }
    printf("%d power %d = %d",N,M,power);
    return 0;
}