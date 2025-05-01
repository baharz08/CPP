#include <stdio.h>

void changeValue(int *x) {
    *x = 20;  
}

int main() {
    int a = 10;
    changeValue(&a);
    printf("Value of a after function call: %d\n", a); 
    return 0;
}