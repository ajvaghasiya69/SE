#include<stdio.h>
void calculateprice(float value);
int main()
{
	float value=12;
printf("final value is:");
		calculateprice(value);
}
void calculateprice(float value)
{
	value=value+(0.18*value);
	printf("final price is:%f",value);
}
