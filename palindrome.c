#include <stdio.h>
int main() {
    int n, n1, rev = 0, rem;
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    while (n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (n1 == rev){
        printf("%d is palindromic number", n1); 
    }
    else{
        printf("%d is not a palindromic number", n1); 
    }    
    return 0; 
}
