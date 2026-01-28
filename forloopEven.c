#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int even=0;
    for (int i=2;i<=N;i++) {
        if (i%2==0) {
         printf("%d ",i);
        }
    }
    return 0;
}