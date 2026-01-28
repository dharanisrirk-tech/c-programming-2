#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int count=0;
    for (count=1;N/10!=0;N/=10) {
        count++;
    }
    printf("%d",count);
return 0;
}