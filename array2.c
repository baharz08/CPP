#include <stdio.h>
int main()
{

    int size;
    scanf("%d",&size); 

    int array[size];
    printf("enter the element of the array");
    for(int i = 0 ; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    for(int i = size-1; i >=0; i--)
    {
        printf("%d \t", array[i]);
    }


    return 0;

}