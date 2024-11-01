#include <stdio.h>
int main() {
    float num;
    printf("enter your number:");
    scanf("%.4f", &num);
    if(num == 0)
    {
        printf("The number is zero.");
    }
    else if (num > 0)
    {
        printf("The number is positive.");
    }
    else
    {
        printf("The number is negative.");
    }

    return 0;
}
