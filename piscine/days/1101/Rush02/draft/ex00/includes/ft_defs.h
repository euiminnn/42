/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_defs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:56:51 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:41:25 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DEFS_H
# define FT_DEFS_H

# define NULL 0

typedef	enum {
	false = 0,
	true = 1
}	t_bool;

typedef enum {
	e_none,
	e_error,
	e_dict
}	t_error;

#endif
