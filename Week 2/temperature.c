#include <stdio.h>

int main(void)
{
    float Far;
    printf("What is the temperature is farenheit: \n");
    scanf("%f", &Far);
    float Cels = (Far-32)/1.8;
    printf("The temperature is %.2f F° = %.2f C° \n", Far, Cels); // The answer is 40-degrees
}
