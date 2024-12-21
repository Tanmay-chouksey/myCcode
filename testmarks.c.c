#include <stdio.h>

int main()
{
    int marks;

    printf("Give your test marks\n");

    scanf("%d", &marks);
    printf("You have entered %d as your passing marks\n", marks);

    if (marks>40)
    {
        printf("You got passed in both phy and maths");
    }
    else if (marks>30)
    {
        printf("you have just passed  your maths test");
    
    }
    if (marks<22)
    {
        printf("sorry");
    }
    return 0;
}