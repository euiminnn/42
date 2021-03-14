/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atow.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:42:17 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:37:14 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_ATOW_H
# define FT_ATOW_H

# include "ft_defs.h"
# include "ft_dict.h"

void	ft_atow_short(char *nbr, t_dict *darr, t_bool *printed);
t_error	ft_atow(char *nbr, t_dict *darr, t_bool *printed);

#endif
