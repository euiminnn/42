/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solver.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 18:33:43 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 16:48:28 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_atow.h"
#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_string.h"
#include "ft_is.h"
#include <stdlib.h>

t_dict	*find_key(int idig, t_dict *darr)
{
	t_dict	*next;

	next = darr + 1;
	while (next->key && next->digits <= idig)
	{
		next++;
		darr++;
	}
	return (darr);
}

void	print_logic(char *str, char *suffix, t_bool printed)
{
	if (printed)
	{
		ft_putstr(" ");
		ft_putstr(suffix);
		if (ft_strlen(str) && !ft_iszerostr(str))
			ft_putstr(" ");
	}
}

t_error	ft_solve(char *inp, t_dict *darr)
{
	char	*last;
	char	*tstr;
	t_bool	printed;
	t_dict	*cd;

	printed = false;
	cd = find_key(ft_strlen(inp), darr);
	if (ft_strlen(inp) > 3)
	{
		last = inp + (ft_strlen(inp) - (cd)->digits) + 1;
		tstr = ft_strrdup(inp, last);
		if (ft_strlen(tstr) > 3)
		{
			free(tstr);
			return (e_dict);
		}
		ft_atow(tstr, darr, &printed);
		print_logic(last, cd->value, printed);
		free(tstr);
		return (ft_solve(last, darr));
	}
	else
		return (ft_atow(inp, darr, &printed));
}
