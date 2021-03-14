/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dynstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 02:04:13 by minsunki          #+#    #+#             */
/*   Updated: 2020/10/31 16:56:14 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_defs.h"
#include <stdlib.h>

char	*ft_dynstr(char *orig, char *str, int ssize)
{
	int		osize;
	char	*ret;
	int		i;

	i = 0;
	osize = 0;
	if (orig)
		osize = ft_strlen(orig);
	if (!(ret = (char *)malloc(sizeof(char) * (osize + ssize + 1))))
		return (NULL);
	while (i < osize)
	{
		ret[i] = orig[i];
		i++;
	}
	while (i < osize + ssize)
		ret[i++] = *str++;
	ret[i] = '\0';
	if (orig)
		free(orig);
	return (ret);
}
