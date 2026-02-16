#include<stdio.h>
int main() {
    int arr[5]={10,22,38,43,57};
    int *p = arr;
    int length=sizeof(arr)/sizeof(arr[0]);
    for (int i=0;i<length;i++) {
        printf("%d\n", *(p+i));
    }
    return 0;
}