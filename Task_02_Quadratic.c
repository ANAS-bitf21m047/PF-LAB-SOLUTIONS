#include <stdio.h>
int main()
{
	float a, b, c;
	int x;
	printf("Enter a ,b ,c Of Quadratic Equation: ");
	scanf("%f %f %f", &a, &b, &c);
	printf("Enter value of x: ");
	scanf("%d", &x);
	printf("Answer: %f", a * x * x + b * x + c);
}