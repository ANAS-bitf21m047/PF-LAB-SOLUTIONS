#include <stdio.h>
int main()
{
	int real1, imag1, real2, imag2;
	printf("Enter Real part of First Complex Number: ");
	scanf("%d", &real1);
	printf("Enter Imaginary part of First Complex Number: ");
	scanf("%d", &imag1);
	printf("Enter Real part of Second Complex Number: ");
	scanf("%d", &real2);
	printf("Enter Imaginary part of Second Complex Number: ");
	scanf("%d", &imag2);
	printf("Addition of the  two numbers is  %d + (%d)i\n", real1 + real2, imag1 + imag2);
	printf("Subtraction of  two numbers is %d + (%d)i\n", real1 - real2, imag1 - imag2);
	printf("Multiplication of these two numbers is %d + (%d)\n", real1 * real2 - imag1 * imag2, real1 * imag2 + imag1 * real2);
	printf("Conjugate of these two numbers is %d + (%d)i and %d + (%d)i\n", real1, -imag1, real2, -imag2);
	return 0;
}