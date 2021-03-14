/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_util.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 21:05:06 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:19:12 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_string.h"

t_dict	*ft_dict_find_by_key(int n, char *key, t_dict *darr)
{
	while (darr->key)
	{
		if (ft_strncmp(n, key, darr->key) == 0)
			return (darr);
		darr++;
	}
	return (NULL);
}

t_dict	*ft_dict_find_suffix(int dig, t_dict *darr)
{
	while (darr->key)
	{
		if (darr->digits == dig && darr->is_suffix)
			return (darr);
		darr++;
	}
	return (NULL);
}

t_dict	*ft_dict_find_non_suffix(int dig, char *key, t_dict *darr)
{
	while (darr->key)
	{
		if (darr->digits == dig && darr->key[0] == key[0])
			return (darr);
		darr++;
	}
	return (NULL);
}
