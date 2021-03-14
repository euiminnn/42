/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_parser.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:29:31 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:48:33 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_solver.h"
#include "ft_string.h"
#include "ft_is.h"
#include "ft_stdin.h"
#include <stdlib.h>

int			ft_check_input(char *inp, t_dict *darr)
{
	char	*temp;

	temp = inp;
	if (ft_strlen(inp) == 1 && *inp == '0')
	{
		ft_putstr(ft_dict_find_by_key(1, inp, darr)->value);
		return (2);
	}
	else if (*inp == '0')
		return (1);
	while (*temp)
	{
		if (!ft_isnumber(*temp))
			return (1);
		temp++;
	}
	return (0);
}

t_error		check_and_solve(char *inp, t_dict **darr)
{
	int		err;

	if ((err = ft_check_input(inp, *darr)))
	{
		if (inp)
			free(inp);
		inp = NULL;
		if (err == 2)
			return (e_none);
		else
			return (e_error);
	}
	if ((err = ft_solve(inp, *darr)))
		return (err);
	return (e_none);
}

t_error		three_args(char **av, t_dict **darr)
{
	char	*inp;
	t_error	err;

	if ((err = ft_dict_builder(av[1], darr)))
		return (err);
	if (!(inp = ft_strdup(av[2])))
		return (e_error);
	if ((err = check_and_solve(inp, darr)))
		return (err);
	return (e_none);
}

t_error		two_args(char **av, t_dict **darr)
{
	t_error	err;
	char	*inp;

	if (!ft_dict_builder(av[1], darr))
	{
		return (e_error);
		if ((err = ft_read_stdin(&inp)))
			return (err);
		if ((err = check_and_solve(inp, darr)))
			return (err);
	}
	else
	{
		ft_dict_free(*darr);
		if ((err = ft_dict_builder(DICT_DEF, darr)))
			return (err);
		if (!(inp = ft_strdup(av[1])))
			return (e_error);
		if ((err = check_and_solve(inp, darr)))
			return (err);
	}
	return (e_none);
}

t_error		ft_parse_args(int ac, char **av, t_dict **darr)
{
	t_error	err;
	char	*inp;

	if (3 < ac)
		return (e_error);
	if (ac == 3)
		return (three_args(av, darr));
	else if (ac == 2)
		return (two_args(av, darr));
	else if (ac == 1)
	{
		if ((err = ft_dict_builder(DICT_DEF, darr)))
			return (err);
		if ((err = ft_read_stdin(&inp)))
			return (err);
		if ((err = check_and_solve(inp, darr)))
			return (err);
	}
	return (e_none);
}
