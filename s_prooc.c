#include <stdio.h>

int main()
{
 int a, b;
 char operation;
 int ro;

 printf("Welcome to my s_prooc!!\n");
 printf("\n");


 printf("Enter the operation you want to perform/tap x to exit the code:");
 scanf("%c", &operation);
 if (operation=='x')
 {
    goto end;
 }
 
 printf("\n");

 
 printf("Enter your 1st no.:");
 scanf("%d", &a);
 printf("\n");

 printf("Enter your 2nd no.:");
 scanf("%d", &b);
 printf("\n");




    switch (operation)
    {
        case '+':
            ro = a + b;
            printf("The sum of %d and %d will be %d", a, b, ro);
            break;
        case '-':
            ro = a - b;
            printf("The minus of %d and %d will be %d", a, b, ro);  
            break;
        case '*':
            ro = a * b;
            printf("The multiplication of %d and %d will be %d", a, b, ro);
            break;
        case '/':
            ro = a / b;
            printf("The division of %d and %d will be %d", a, b, ro);
            break;
        default:
            end:
            printf("Thankyouuu for using!!");
            break;
    }

return 0;
}
