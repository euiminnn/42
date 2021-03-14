/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:34:15 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 22:49:12 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_error.h"
#include "ft_arg_parser.h"
#include "ft_dict.h"
#include "ft_defs.h"
#include "ft_string.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	t_dict	*dicta;
	t_error	err;

	dicta = NULL;
	if ((err = ft_parse_args(argc, argv, &dicta)))
		return (ft_error_handler(err, dicta));
	ft_putstr("\n");
	return (0);
}
