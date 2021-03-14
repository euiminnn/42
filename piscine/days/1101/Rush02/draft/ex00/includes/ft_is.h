/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 14:31:20 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:37:01 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_IS_H
# define FT_IS_H

# include "ft_defs.h"

t_bool	ft_iswspace(char c);
t_bool	ft_isnumber(char c);
t_bool	ft_isprintable(char c);
t_bool	ft_iszerostr(char *str);

#endif
