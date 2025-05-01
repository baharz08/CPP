#include <stdio.h>
#include <stdbool.h>

bool isWellOrdered(int num) {
    int previousDigit = 10;
    int changeCount = 0;
    bool increasing = false, decreasing = false;

    while (num > 0) {
        int currentDigit = num % 10;

        if (currentDigit > previousDigit) {
            if (decreasing) {
                changeCount++;
                decreasing = false;
            }
            increasing = true;
        } else if (currentDigit < previousDigit) {
            if (increasing) {
                changeCount++;
                increasing = false;
            }
            decreasing = true;
        }

        if (changeCount > 1) {
            return false;
        }

        previousDigit = currentDigit;
        num /= 10;
    }

    return true;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isWellOrdered(num)) {
        printf("The number is well-ordered.\n");
    } else {
        printf("The number is not well-ordered.\n");
    }

    return 0;
}
