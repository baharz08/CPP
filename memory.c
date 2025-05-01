#include <stdio.h>

void myfunc(int a, int b, int c, int count_a, int count_b, int count_c)
{
    int temp;

    scanf("%d", &temp);

    if (a == 0)
    {
        a = temp;
        count_a++;
    }
    else if (b == 0 && a != temp)
    {
        b = temp;
        count_b++;
    }
    else if (c == 0 && a != temp && b != temp)
    {
        c = temp;
        count_c++;
    }
    else
    {
        if (temp == a)
        {
            count_a++;
        }
        else if (temp == b)
        {
            count_b++;
        }
        else if (temp == c)
        {
            count_c++;
        }
        else
        {
            printf("\n%d was typed %d times.\n", a, count_a);
            printf("%d was typed %d times.\n", b, count_b);
            printf("%d was typed %d times.\n", c, count_c);
            return;
        }
    }

    myfunc(a, b, c, count_a, count_b, count_c);
}

int main()
{
    myfunc(0, 0, 0, 0, 0, 0);
    return 0;
}
