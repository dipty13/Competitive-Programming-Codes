#include<stdio.h>
int main()
{
    char ch;
    char s[1000], s2[1000];
    scanf("%c", &ch);
    scanf("%s", s);
    scanf("\n");
    scanf("%[^\n]%*c", s2);
    printf("%c\n", ch);
    printf("%s\n", s);
    printf("%s\n", s2);
    return 0;
}
