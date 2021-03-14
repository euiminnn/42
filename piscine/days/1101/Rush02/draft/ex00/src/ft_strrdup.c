/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 15:43:44 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:16:41 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_defs.h"
#include <stdlib.h>

char	*ft_strrdup(char *from, char *to)
{
	char	*ret;
	int		i;

	i = 0;
	if (from == to)
		return (NULL);
	if (!(ret = (char *)malloc(sizeof(char) * (to - from + 1))))
		return (NULL);
	while (from + i != to)
	{
		ret[i] = from[i];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
