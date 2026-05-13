
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
    scanf("%f%c%f", &N1, &ch, &N2);

    if (ch == '+'){
        add();
    }

    else if (ch =='-'){
        less();
    }
    else if (ch =='*'){
        mult();
    }
    else if (ch =='/'){
        divd();
    }
    else{
        printf("check spelling\n");
    }


}
void add(void){

//float N1;
//float N2;
  //  printf("Equation:\n");
    //scanf("%f+%f",&N1 ,&N2);
    float ans = N1 + N2;
    printf("%.2f\n",ans);
}
void less(void){

//float N1;
//float N2;

    // printf("Equation:\n");
     //scanf("%f-%f",&N1 ,&N2);
     float ans = N1 - N2;
     printf("%2.f\n",ans);
}
void mult(void){

//float N1;
//float N2;

   // prinf("Equation:\n");
   // scanf("%f*%f", &N1,&N2);
     float ans = N1 * N2;
     printf("%.2f\n",ans);
}
void divd(void){

//float N1;
//float N2;

 // printf("Equation:\n");
   //scanf("%f/%f",&N1 ,&N2);
     float ans = N1 / N2;
             if (N2 == 0){
                printf("no can do\n");
            }
            else{
    printf("%.2f\n",ans);
            }
}
