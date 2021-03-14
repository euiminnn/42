/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/20 15:52:13 by echung            #+#    #+#             */
/*   Updated: 2020/10/22 11:54:20 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char comb[7];
	
	comb[0] = '0';
	comb[2] = ' ';

	comb[5] = ',';
	comb[6] = ' ';

	while (comb[0] <='9')
	{
		comb[1] = '0';
		while(comb[1] <= '9')
		{
			comb[3] = comb[0];
			while (comb[3] <= '9')
			{
				comb[4] = comb[1];
				while (comb[4] <= '9')
				{
					if (!(comb[0] == '9' && comb[1] == '8'))
						write(1, comb, 7);
					comb[4]++;
				}
				comb[3]++;	
			}
			comb[1]++;
		}
		comb[0]++;
	}
	write(1, "98 99", 5);
}
