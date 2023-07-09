#include<stdio.h>
int main()
{
	char day='s';
	printf("enter day(1-7):\n");
	
	
	switch(day)
	{
		case 'm':
		printf("monday \n");
		break;
		case 't':
		printf("tuesday \n");
		break;
		case 'w':
		printf("wenasday \n");
		break;
		case 'T':
		printf("thursday \n");
		break;
		case 'f':
		printf("friday \n");
		break;
		case 's':
		printf("satuerday \n");
		break;
		case 'S':
		printf("sunday \n");
		break;
		default:
		printf("not a valid day \n");
	}
}
