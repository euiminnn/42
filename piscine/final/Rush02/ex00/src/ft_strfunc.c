/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strfunc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 20:32:35 by minsunki          #+#    #+#             */
/*   Updated: 2020/10/31 21:32:32 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

int		ft_strncmp(int n, char *s1, char *s2)
{
	int	i;

	i = 0;
	while (i < n - 1 && s1[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int		ft_nbrcmp(char *nb1, char *nb2)
{
	int		nb1_s;
	int		nb2_s;

	nb1_s = ft_strlen(nb1);
	nb2_s = ft_strlen(nb2);
	if (nb1_s - nb2_s)
		return (nb1_s - nb2_s);
	return (ft_strcmp(nb1, nb2));
}
