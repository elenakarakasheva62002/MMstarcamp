#include <stdio.h>
int main()
{
    int num, max = num;
    while(scanf("%d", &num) != -1)
    {
        if(num > max)
        {
            max = num;
        }
    }
    printf("%d \n", max);
    return 0;
}