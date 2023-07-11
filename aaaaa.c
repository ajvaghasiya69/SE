#include <stdio.h>
int main()
{
    int numbers[10];
    int sumodd = 0;
	printf("Enter 10 numbers:\n");

   int i=0;
    for (i ; i < 10; i++)
    {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);

        
        if (numbers[i] % 2 != 0)
        {
            sumodd+= numbers[i];
        }
    }

    printf("sum of even numbers: %d\n", sumodd);

    
}

