#include <stdio.h>
#include <stdlib.h>

int main()
{
    // PROGRAM TO PRINT PRIME NUMBERS FROM 50 TO 100 AND COUNT THEM

    int Prime, PrimeEnd;
    printf("Please enter to prime numbers: i.e 50 - 100 \n");
    scanf("%d", &Prime);
    scanf("%d", &PrimeEnd);

    int count = 0;
    for (int i = Prime; i <= PrimeEnd; i++)
    {
        if (Prime % 2 >= 1 && Prime % 3 >= 1)
        {
            printf("This is Prime:%d \n", Prime);
            Prime++;
            count++;
        }
        else
        {
            Prime++;
        }
    }
    printf("There are %d Prime Numbers", count);
}