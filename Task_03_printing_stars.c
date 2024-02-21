#include <stdio.h>
int main()
{
	int num;
	printf("Enter Number of Rows ");

	scanf("%d", &num);
	if (num == 10)
	{
		printf("* * * * * * * * * *");
		printf("\n* * * * * * * * *");
		printf("\n* * * * * * * *");
		printf("\n* * * * * * *");
		printf("\n* * * * * *");
		printf("\n* * * * *");
		printf("\n* * * *");
		printf("\n* * *");
		printf("\n* *");
		printf("\n*");
	}
	else
	{
		printf("The input password for rows was not correct to the print the Stars");
	}

	
}