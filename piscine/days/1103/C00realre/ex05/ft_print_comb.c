/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/19 22:33:21 by echung            #+#    #+#             */
/*   Updated: 2020/11/04 04:50:22 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int comb1;
	int comb2;
	int comb3;

	comb1 = '0';
	while (comb1 <= '7')
	{
		comb2 = comb1 + 1;
		while (comb2 <= '8')
		{
			comb3 = comb2 + 1;
			while (comb3 <= '9')
			{
				write(1, &comb1, 1);
				write(1, &comb2, 1);
				write(1, &comb3, 1);
				if (!(comb1 == '7' && comb2 == '8' && comb3 == '9'))
					write(1, ", ", 2);
				comb3++;
			}
			comb2++;
		}
		comb1++;
	}
}
