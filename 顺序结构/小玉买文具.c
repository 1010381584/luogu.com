#include <stdio.h>
int main()
{
    int a, b, money;
    scanf("%d %d",&a ,&b);
    money = a*10 + b;
    printf("%d", money/19);
    return 0;
}