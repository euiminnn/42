/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:40:02 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 10:16:31 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void	ft_rev_int_tab(int *tab, int size)
{
	int n;
	int temp;

	n = 0;
	while (n < size / 2)
	{
		temp = tab[n];
		tab[n] = tab[size - n - 1];
		tab[size - n - 1] = temp;
		n++;
	}
}

int		main(void)
{
	int test[3] = { 1, 2, 3 };
	ft_rev_int_tab(test, 3);
	printf("%d\n", test[0]);
	printf("%d\n", test[1]);
	printf("%d\n", test[2]);
	return (0);
}
