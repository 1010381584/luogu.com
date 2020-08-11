#include <stdio.h>
int main()
{
    int a, b, c, d, time;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    time = (c-a)*60 + (d-b);
    printf("%d %d", time/60, time%60);
    return 0;
}