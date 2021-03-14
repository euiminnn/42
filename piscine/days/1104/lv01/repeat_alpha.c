/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 21:42:10 by echung            #+#    #+#             */
/*   Updated: 2020/11/04 22:36:42 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_repeat_alpha(char abc, int n)
{
	while (n > 0)
	{
		write(1, &abc, 1);
		n--;
	}
}

void	ft_nth_alpha(char *str)
{
	int n;
	
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			n = *str - 'a' + 1;
		else if ('A' <= *str && *str <= 'Z')
			n = *str - 'A' + 1;
		else
			n = 1;
		ft_print_repeat_alpha(*str, n);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if ((argc != 2) || (*argv[1] == '\0'))
		write(1, "\n", 1);
	else
		ft_nth_alpha(argv[1]);
}
