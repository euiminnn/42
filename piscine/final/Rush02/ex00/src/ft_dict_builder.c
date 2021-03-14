/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_builder.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 13:28:27 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 21:38:31 by naykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_defs.h"
#include "ft_dict.h"
#include "ft_is.h"
#include "ft_string.h"
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

t_error	ft_dict_read_file(char *filename, char **dynstr)
{
	int		fd;
	char	buf[512];
	int		sread;

	*dynstr = NULL;
	if ((fd = open(filename, O_RDONLY)) < 0)
		return (e_dict);
	while ((sread = read(fd, buf, 512)))
	{
		if (sread < 0)
			return (e_dict);
		*dynstr = ft_dynstr(*dynstr, buf, sread);
		if (!(*dynstr))
			return (e_dict);
	}
	if (fd)
		close(fd);
	return (e_none);
}

t_error	ft_dict_validate_line(char *from, char *to)
{
	int	cnt;

	cnt = 0;
	while (ft_isnumber(*from))
	{
		from++;
		cnt++;
	}
	if (!cnt)
		return (e_dict);
	while (*from == ' ')
		from++;
	if (*from++ != ':')
		return (e_dict);
	while (*from == ' ')
		from++;
	cnt = 0;
	while (ft_isprintable(*from))
	{
		from++;
		cnt++;
	}
	if (!cnt || from != to)
		return (e_dict);
	return (e_none);
}

t_error	ft_dict_parser(int *cnt, char *str)
{
	char	*last;

	last = str;
	while (*str)
	{
		while (*str != '\n')
			str++;
		if (last != str)
		{
			if (ft_dict_validate_line(last, str))
				return (e_dict);
			(*cnt)++;
		}
		last = ++str;
	}
	if (last != str)
	{
		if (ft_dict_validate_line(last, str))
			return (e_dict);
		(*cnt)++;
	}
	return (e_none);
}

t_error	ft_free_raw(t_error err, char *raw)
{
	if (raw)
		free(raw);
	raw = NULL;
	return (err);
}

t_error	ft_dict_builder(char *filename, t_dict **darr)
{
	int		cnt;
	char	*raw;
	t_error	err;

	cnt = 0;
	if ((err = ft_dict_read_file(filename, &raw)))
		return (ft_free_raw(err, raw));
	if ((err = ft_dict_parser(&cnt, raw)))
		return (ft_free_raw(err, raw));
	if ((err = ft_dict_allocate(cnt, raw, darr)))
		return (ft_free_raw(err, raw));
	ft_dict_sorter(*darr);
	ft_free_raw(e_none, raw);
	return (e_none);
}
