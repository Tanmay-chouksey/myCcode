#include <stdio.h>

int main()
{
    int a, b, r;
    char op;
    
    label:
    
    printf("Select the operation you want to do/tap x to exit:");
    scanf("%c", &op);
    if (op=='x')
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
    

    if (op=='+')
    {
        r = a + b;
        printf("Your result is %d\n", r);
        printf("\n");
        goto label;
    }
    else if (op=='-')
    {
        r = a - b;
        printf("Your result is %d\n", r);
        printf("\n");
        goto label;
    }
    else if (op=='*')
    {
        r = a * b;
        printf("Your result is %d\n", r);
        printf("\n");
        goto label;
    }
    else if (op=='/')
    {
        r = a / b;
        printf("Your result is %d\n", r);
        printf("\n");
        goto label;

    }
    else
    {
        end:
        printf("Thankyouuu!!");
    }

    return 0;
    

}