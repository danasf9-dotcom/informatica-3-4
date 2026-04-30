#include <stdio.h>
int main (void)
{
    float F;
    printf("What is the Temperature is farenheit: \n");
    scanf("%f", &F);
    float C = (F-32)/1.8;
    printf("The temperature is %.2f F° = %.2f C° \n", F, C); // The answer is 40-degrees
}
