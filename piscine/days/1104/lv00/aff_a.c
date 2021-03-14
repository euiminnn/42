/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 19:43:21 by echung            #+#    #+#             */
/*   Updated: 2020/11/04 20:00:40 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_a(char *str)
{
	while (*str != '\0')
	{
		if (*str == 'a')
			return (1);
		else
			return (0);
		str++;
	}
	return (0);   //why...?
}

int		main(int argc, char **argv)
{
	int index;
	index = 1;
	if (argc != 2)
		write(1, "a\n", 2);
	while (index < argc)
	{
		if (ft_a(argv[index]) == 1)
			write(1, "a\n", 2);
		else if (ft_a(argv[index]) == 0)
			write(1, "\n", 1);
		index++;
	}
}
