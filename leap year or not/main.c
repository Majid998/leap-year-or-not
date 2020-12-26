/* Any year is input through the keyboard. Write a program to
determine whether the year is a leap year or not.
(Hint: Use the % (modulus) operator) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int year;

    printf("Hello world!\n");
    printf("\n Please enter the year: \n");
    scanf("%d", &year);

    //checking if the entered year is century year or not
    // i.e. 1000, 1200, the years that have 00 in the last two digits of the year
    {
        if( year % 100 == 0)
        {
            if( year % 400 == 0)
            {
                printf("The year = %d is a Century and a leap year", year);
            }
            else
            {
                printf("The year = %d is century year but not a leap year", year);
            }
        }
        else
        {
            if(year % 4 == 0)
            {
                printf("The year = %d is a leap year", year);
            }
            else
            {
                printf("The year = %d is not a leap year", year);
            }
        }
    }
    return 0;
}
