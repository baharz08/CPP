#include <stdio.h>

int main()
{
    int s, m, n;
    int digit1, digit2, mult;

    scanf("%d %d %d", &s, &m, &n);

    int original_s = s;

    for (int i = 1; i < m; i++)
    {
        s /= 10;
    }
    digit1 = s % 10;

    s = original_s;

    for (int i = 1; i < n; i++)
    {
        s /= 10;
    }
    digit2 = s % 10;

    mult = digit1 * digit2;

   while (mult > 9)
   {
   mult = (mult/10)+(mult%10);
   }
   printf("%d", mult);
   
    return 0;
}