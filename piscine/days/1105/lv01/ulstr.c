/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 20:40:03 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 20:53:40 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_reverse_letter(char *str)
{
	while (*str != '\0')
	{
		if ('a' <= *str && *str <= 'z')
			*str = *str - 'a' + 'A';
		else if ('A' <= *str && *str <= 'Z')
			*str = *str - 'A' + 'a';
		write(1, str, 1);
		str++;
	}
}

int		main(int argc, char **argv)
{
	if (argc != 2 || *argv[1] == '\0')
		write(1, "\n", 1);
	else
		ft_reverse_letter(argv[1]);
}
