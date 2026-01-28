#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int multiply=0;
    for (int i=1;i<=10;i++) {
        multiply= N*i;
        printf("%d ",multiply);
    }
return 0;
}
