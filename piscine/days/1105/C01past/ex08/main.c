/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 11:16:45 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 11:44:36 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	
	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] - tab[j] > 0)
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}

int		main(void)
{
	int test[4] = {11, 43, 2147483647, 21000000};
	ft_sort_int_tab(test, 4);
	printf("%d\n", test[0]);
	printf("%d\n", test[1]);
	printf("%d\n", test[2]);
	printf("%d\n", test[3]);
	return (0);
}
