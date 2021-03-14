/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:40:02 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 11:50:25 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
