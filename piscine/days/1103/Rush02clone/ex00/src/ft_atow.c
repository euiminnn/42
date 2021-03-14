/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atow.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:39:20 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:23:42 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_string.h"
#include "ft_is.h"

void	advance_zero(char **str)
{
	while (**str == '0')
		(*str)++;
}

void	ft_atow_short(char *nbr, t_dict *darr, t_bool *printed)
{
	int dig;

	dig = 0;
	advance_zero(&nbr);
	while (*nbr)
	{
		dig = ft_strlen(nbr);
		if (dig > 1)
		{
			ft_putstr(ft_dict_find_non_suffix(dig, nbr, darr)->value);
			*printed |= true;
		}
		else if (*nbr != '0')
		{
			if (*printed)
				ft_putstr(" ");
			ft_putstr(ft_dict_find_by_key(1, nbr, darr)->value);
			*printed |= true;
		}
		nbr++;
	}
	return ;
}

t_error	ft_atow(char *nbr, t_dict *darr, t_bool *printed)
{
	advance_zero(&nbr);
	if (ft_dict_find_suffix(ft_strlen(nbr), darr))
	{
		ft_putstrs(ft_dict_find_by_key(1, nbr, darr)->value);
		ft_putstr(ft_dict_find_suffix(ft_strlen(nbr), darr)->value);
		nbr++;
		*printed = true;
	}
	advance_zero(&nbr);
	if (ft_nbrcmp(nbr, "20") < 0 &&
		ft_dict_find_by_key(ft_strlen(nbr), nbr, darr))
	{
		if (*printed)
			ft_putstr(" ");
		ft_putstr(ft_dict_find_by_key(ft_strlen(nbr), nbr, darr)->value);
        *printed |= true;
	}
	else
	{
		if (*printed && !ft_iszerostr(nbr))
			ft_putstr(" ");
		ft_atow_short(nbr, darr, printed);
	}
	return (e_none);
}
