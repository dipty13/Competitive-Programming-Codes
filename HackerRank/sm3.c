#include<stdio.h>

int main()
{
    int i, c = 0, n, x;
    scanf("%d", &n);
    while(n != 0){
        x = n % 10;
        n /= 10;
        c += x;
    }
    printf("%d\n", c);

    return 0;
}
