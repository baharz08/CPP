#include <stdio.h>

void processDays(int n)
{
    if (n == 0)
    {
        return;
    }

    int day;
    scanf("%d", &day);

    processDays(n - 1);

    switch (day)
    {
    case 1:
        printf("Saturday\n");
        break;
    case 2:
        printf("Sunday\n");
        break;
    case 3:
        printf("Monday\n");
        break;
    case 4:
        printf("Tuesday\n");
        break;
    case 5:
        printf("Wednesday\n");
        break;
    case 6:
        printf("Thursday\n");
        break;
    case 7:
        printf("Friday\n");
        break;
    default:
        printf("Invalid.\n");
        break;
    }
}

int main()
{
    int n;

    scanf("%d", &n);

    processDays(n);
    return 0;
    
}