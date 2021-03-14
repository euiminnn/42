/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strout.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:00:32 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 01:20:58 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_fputstr(int fd, char *str)
{
	while (*str)
		write(fd, str++, 1);
}

void	ft_fputstrn(int fd, char *str)
{
	ft_fputstr(fd, str);
	ft_fputstr(fd, "\n");
}

void	ft_putstr(char *str)
{
	ft_fputstr(1, str);
}

void	ft_putstrn(char *str)
{
	ft_fputstr(1, str);
	ft_fputstr(1, "\n");
}

void	ft_putstrs(char *str)
{
	ft_fputstr(1, str);
	ft_fputstr(1, " ");
}
