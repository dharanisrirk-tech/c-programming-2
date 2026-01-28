#include<stdio.h>
int main() {
    int N;
    scanf("%d",&N);
    int count=0;
    for (int i=1;N>0;N=N/10) {
        if ( (N%10)%2==0) {
            count++;
        }
    }
    printf("%d",count);
    return 0;
}
