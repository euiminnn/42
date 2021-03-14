/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 09:34:30 by echung            #+#    #+#             */
/*   Updated: 2020/10/29 10:00:09 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int index_d;
	int index_s;

	index_d = 0;
	while (*(dest + index_d) != '\0')
	{
		index_d++;
	}
	index_s = 0;
	while (*(src + index_s) != '\0')
	{
		*(dest + index_d + index_s) = *(src + index_s);
		index_s++;
	}
	*(dest + index_d + index_s) = '\0';
	return (dest);
}
