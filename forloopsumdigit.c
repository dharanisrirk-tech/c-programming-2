#include<stdio.h>
int main() {
    int N;
    int sum=0;
    scanf("%d",&N);

    for (int i=N;i!=0;i/=10){
        int a=i%10;
        sum=sum+a;


    }
    printf("%d",sum);
}