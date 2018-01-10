#include <stdio.h>
#include <stdlib.h>


int	euclid(int m, int n)
{
	int	remainder;

	remainder = m % n;
	while(remainder != 0)  {
		m = n;
		n = remainder;
		remainder = m % n;
	}
	return(n);		
}
