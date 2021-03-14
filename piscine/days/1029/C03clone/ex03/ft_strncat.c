/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 09:54:01 by echung            #+#    #+#             */
/*   Updated: 2020/10/29 10:00:42 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int index_d;
	int index_s;

	index_d = 0;
	while (*(dest + index_d) != '\0')
		index_d++;
	index_s = 0;
	while (*(src + index_s) != '\0' && nb > 0)
	{
		*(dest + index_d + index_s) = *(src + index_s);
		index_s++;
		nb--;
	}
	*(dest + index_d + index_s) = '\0';
	return (dest);
}
