#include <stdio.h>
#include <stdlib.h>

void main()
{
	char	str[100];
	int	m;
	int	n;
	int	answer;

	printf("Enter an integer:");
	fgets(str, 100, stdin);
	m = atoi(str);	
	printf("Enter another integer:");
	fgets(str, 100, stdin);
	n = atoi(str);
	answer = euclid(m, n);
	printf("The greatest common divisor between these two integers is %d\n", answer);
}
