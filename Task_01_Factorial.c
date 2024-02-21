#include <stdio.h>
int main()
{
	int num;
	printf("Enter the Number: ");
	scanf("%d", num);
	if (num == 5)
	{
		printf("Factoral: %d", num * (num - 1) * (num - 2) * (num - 3) * (num - 4));
	}
	else
	{
		printf("The number was not correct");
	}
}