#include<stdio.h>
int main() {
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    int rem = 0, digit = 0;
    while(n!=0) {
        rem = n%10;
        digit = digit*10+rem;
        n = n/10;
    }
    printf("digit er moddhe ki ache %d",digit);
    return 0;
}
