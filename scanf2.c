//dangerously get a string from user using scanf

#include <stdio.h>
int main(void)
{
    char s[5];
    printf("s: ");
    scanf("%s", s);
    printf("%s\n", s);
}