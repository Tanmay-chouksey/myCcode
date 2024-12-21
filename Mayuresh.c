#include <stdio.h>

int main() 
{
    int m, p, c, total, total_m_p;
        printf("Enter marks in Physics: ");
        scanf("%d", &p);
        
        printf("Enter marks in Chemistry: ");
        scanf("%d", &c);
        
        printf("Enter marks in Mathematics: ");
        scanf("%d", &m);

        total = m + p + c;
        total_m_p = m + p;

            switch (1) {
                case 1:
                    if (m >= 65 & p >= 55 & c >= 50 & (total >= 190 || total_m_p >= 140)) 
                    {
                    printf("The candidate is eligible.\n");
                    break;
                    }
                    
                    printf("The candidate is not eligible.\n");
                    break;

                    default:
                    printf("Invalid input.\n");
                    }

    return 0;
}
