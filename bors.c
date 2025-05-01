#include <stdio.h>

int main()
{
    int n, pre_price, today_price, sugar, budget = 1000;

    scanf("%d", &n);
    scanf("%d", &today_price);
    if (today_price <= 1000)
    {
        sugar = budget / today_price;
        budget = 0;
        for (int i = 1; i < n; i++)
        {

            pre_price = today_price;
            scanf("%d", &today_price);
            if (today_price > pre_price)
            {
                if (sugar == 0)
                {
                    sugar = budget / today_price;
                    budget = 0;
                }
                else
                {
                }
            }
            if (today_price < pre_price)
            {
                budget = sugar * pre_price;
                sugar = budget / today_price;
            }
        }
        budget = sugar * today_price;
        printf("%d\n", budget - 1000);
    }
    else
    {
        printf("0");
    }
    
    return 0;
}