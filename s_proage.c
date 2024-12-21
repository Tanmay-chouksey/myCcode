#include <stdio.h>

int main()
{
    int age, year, cyear;
    char ch;

    printf("press x to exit");
    
    label:
    printf("\n");
    printf("Tap 'O' to start/Tap 'x' to exit:\n");
    scanf("%c", &ch);
     if (ch=='x')
        {
            goto end;
        }  
 

    printf("Enter your birth year:");
    scanf("%d", &year);

   
    printf("Enter the current year:");
    scanf("%d", &cyear);

    age = cyear - year;
    printf("your age is %d", age);
    goto label;

    end:
    printf("You are moving toward exit");

    return 0;
}
 

 

 


 

