#include <stdio.h>

//prototype
void add(void);
void less(void);
void mult(void);
void divd(void);
float N1;
float N2;
int main(void)
{
char ch;
    printf("Equation:\n");
    scanf("%f%c%f", &N1, &ch,&N2);

    if (ch == ´+´){
        add();
    }

    else if (ch == ´-´){
        less();
    }
    else if (ch ==)
}
