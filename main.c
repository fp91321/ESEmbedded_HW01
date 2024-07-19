#include <stdio.h>
#include <stdlib.h>

int plus(int a, int b) { return a + b; }
int minus(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }
int divided(int a, int b) { return a / b; }
int (*operator)(int,int);
int main()
{
	int a, c;
	char b;
	printf("key a Function \nEX: 1 + 1\n");
	scanf("%i %c %i", &a, &b, &c);
	//IF ELSE IF
	if (b == '+')	operator = plus;
	else if (b == '-')	operator = minus;
	else if (b == '*')	operator = multiply;
	else if (b == '/')	operator = divided;

	printf("%d %c %d = %d\n", a, b, c, operator(a, c));
}
