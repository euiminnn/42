#include <stdio.h>

int	ft_find_next_prime(int nb);

int main()
{
	for(int i = 0; i < 100; i++)
	{
		printf("%d is prime? %d\n", i, ft_find_next_prime(i));
	}
	return(0);
}
