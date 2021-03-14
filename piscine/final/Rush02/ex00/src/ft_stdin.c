/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stdin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 18:01:17 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:15:32 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_defs.h"
#include <unistd.h>

t_error	ft_read_stdin(char **ptr)
{
	int		sread;
	char	buf[512];
	int		i;
	char	*to;

	*ptr = NULL;
	i = 0;
	sread = read(0, buf, 512);
	if (sread >= 512)
		return (e_error);
	to = buf;
	while (i < sread && to[i] && to[i] != '\n')
		i++;
	if (to[i] != '\n')
		return (e_error);
	to[i++] = '\0';
	*ptr = ft_strrdup(buf, to + i);
	if (!(*ptr))
		return (e_error);
	return (e_none);
}
