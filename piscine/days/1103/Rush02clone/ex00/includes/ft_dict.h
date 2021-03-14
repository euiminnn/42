/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:22:00 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:39:13 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_DICT_H
# define FT_DICT_H

# include "ft_defs.h"

# define DICT_DEF "numbers.dict"

typedef	struct	s_dict {
	char		*key;
	char		*value;
	t_bool		is_suffix;
	int			digits;
}				t_dict;

t_error			ft_dict_builder(char *filename, t_dict **darr);
t_error			ft_dict_allocate(int cnt, char *raw, t_dict **darr);

void			ft_dict_free(t_dict *dict);

t_dict			*ft_dict_find_by_key(int n, char *key, t_dict *darr);
t_dict			*ft_dict_find_suffix(int dig, t_dict *darr);
t_dict			*ft_dict_find_non_suffix(int dig, char *key, t_dict *darr);

void			ft_dict_sorter(t_dict *darr);

#endif
