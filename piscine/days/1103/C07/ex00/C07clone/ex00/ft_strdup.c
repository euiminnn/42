/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 17:12:20 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 22:04:57 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		len;

	len = 0;
	while (*src != '\0')
	{
		len++;
		str++;
	}
	result = (char *)malloc(sizeof(char) * len + 1);
	if (result == 0)
		return (0);
	while (*src != '\0')
	{
		*result = *src;
		src++;
	}
	*result = '\0';
	return (result);
}
