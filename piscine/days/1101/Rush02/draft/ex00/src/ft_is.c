/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:26:10 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 00:23:17 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"

t_bool	ft_iswspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v')
		return (true);
	if (c == '\f' || c == '\r' || c == ' ')
		return (true);
	return (false);
}

t_bool	ft_isnumber(char c)
{
	if ('0' <= c && c <= '9')
		return (true);
	return (false);
}

t_bool	ft_isprintable(char c)
{
	if (32 <= c && c <= 126)
		return (true);
	return (false);
}

t_bool	ft_iszerostr(char *str)
{
	while (*str)
		if (*str++ != '0')
			return (false);
	return (true);
}
