#include <stdio.h>
int main()
{
    int num;
	printf("Enter a number: ");
    scanf("%d", &num);

    printf("table for %d:\n", num);
    int i=1;

    for(i; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

   
}

