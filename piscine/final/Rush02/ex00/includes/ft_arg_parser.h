/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arg_parser.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 17:33:20 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:34:36 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ARG_PARSER_H
# define FT_ARG_PARSER_H

# include "ft_defs.h"
# include "ft_dict.h"

t_error	ft_parse_args(int ac, char **av, t_dict **darr);

#endif
