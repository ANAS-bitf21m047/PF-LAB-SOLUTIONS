#include <stdio.h>

int main()
{
	int n, reverse = 0;
	printf("Enter a Five Digit Number: ");
	scanf("%d", &n);
	if (n >= 10000 && n <= 99999)
	{
		reverse = reverse * 10 + n % 10;
		n /= 10;
		reverse = reverse * 10 + n % 10;
		n /= 10;
		reverse = reverse * 10 + n % 10;
		n /= 10;
		reverse = reverse * 10 + n % 10;
		n /= 10;
		reverse = reverse * 10 + n % 10;
		n /= 10;
		printf("Reversed is: %d", reverse);
	}
	else
	{
		printf("The Number was not Five Digit Number\n");
	}
	return 0;
}