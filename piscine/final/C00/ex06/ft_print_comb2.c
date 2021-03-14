/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 03:44:19 by echung            #+#    #+#             */
/*   Updated: 2020/11/04 04:31:33 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_result(char c, char d)
{
	write(1, &c, 1);
	write(1, &d, 1);
}

void	ft_i_to_c(int pair)
{
	char c;
	char d;

	c = '0' + pair / 10;
	d = '0' + pair % 10;
	ft_print_result(c, d);
}

void	ft_print_comb2(void)
{
	int f_pair;
	int s_pair;

	f_pair = 0;
	while (f_pair <= 97)
	{
		s_pair = f_pair + 1;
		while (s_pair <= 99)
		{
			ft_i_to_c(f_pair);
			write(1, " ", 1);
			ft_i_to_c(s_pair);
			write(1, ", ", 2);
			s_pair++;
		}
		f_pair++;
	}
	write(1, "98 99", 5);
}
