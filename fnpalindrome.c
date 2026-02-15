 #include <stdio.h>
int reverse(int n) {
    int rev = 0;
    while(n > 0) {
        rev = rev * 10 + (n % 10);
        n = n / 10;
    }
    return rev;
}
void checkPalindrome(int n) {
    if(n == reverse(n))
        printf("Palindrome");
    else
        printf("Not Palindrome");
}
int main() {
    int n;
    scanf("%d", &n);
    checkPalindrome(n);
    return 0;
}