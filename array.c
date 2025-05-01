#include <stdio.h>
int main()
{

    int size;
    scanf("%d",&size); 

    int array[size];
    printf("maghadir araye vared kon");
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = 0; i < size; i++)
    {
        printf("%d \t", array[i]);
    }


    return 0;

}