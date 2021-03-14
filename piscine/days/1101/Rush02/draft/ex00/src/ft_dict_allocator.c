/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_allocator.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:02:31 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:37:24 by naykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_is.h"
#include "ft_string.h"
#include <stdlib.h>

void	ft_dict_free(t_dict *dict)
{
	if (dict == NULL)
		return ;
	while (dict->key)
	{
		if (dict->key)
			free(dict->key);
		if (dict->value)
			free(dict->value);
		dict->key = NULL;
		dict->value = NULL;
	}
	free(dict);
	dict = NULL;
}

t_error	ft_dict_allocate_line(char *from, char *to, t_dict *dict)
{
	char	*cur;

	cur = from;
	while (ft_isnumber(*cur))
		cur++;
	dict->key = ft_strrdup(from, cur);
	if (!(dict->key))
		return (e_dict);
	while (*cur == ' ' || *cur == ':')
		cur++;
	dict->value = ft_strrdup(cur, to);
	if (!(dict->value))
		return (e_dict);
	dict->digits = ft_strlen(dict->key);
	return (e_none);
}

void	ft_dict_aloc_misc(int cnt, t_dict *darr)
{
	int i;
	int	j;

	i = 0;
	while (i < cnt)
	{
		j = 0;
		darr[i].is_suffix = 1;
		while (j < cnt)
		{
			if (i != j && darr[i].digits == darr[j].digits)
				darr[i].is_suffix = 0;
			j++;
		}
		i++;
	}
}

t_error	ft_dict_allocate(int cnt, char *str, t_dict **darr)
{
	char	*last;
	int		i;

	i = 0;
	last = str;
	if (!(*darr = (t_dict *)malloc(sizeof(t_dict) * (cnt + 1))))
		return (e_error);
	(*darr)[cnt].key = 0;
	while (*str)
	{
		while (*str != '\n')
			str++;
		if (last != str)
			if (ft_dict_allocate_line(last, str, &(*darr)[i++]))
				return (e_dict);
		last = ++str;
	}
	if (last != str)
		if (ft_dict_allocate_line(last, str, &(*darr)[i]))
			return (e_dict);
	ft_dict_aloc_misc(cnt, *darr);
	return (e_none);
}
