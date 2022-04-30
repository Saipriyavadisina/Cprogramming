#include <stdio.h>

int main() {
    char ch;
    printf("Enter character: ");
    scanf("%c", &ch);
    printf("The next character of %c is %c", ch, ch+1);
    return 0;
}
