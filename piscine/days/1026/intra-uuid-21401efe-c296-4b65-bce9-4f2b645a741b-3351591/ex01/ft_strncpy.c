/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 14:52:11 by echung            #+#    #+#             */
/*   Updated: 2020/10/27 20:42:42 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	index;
	char			*temp;

	index = 0;
	temp = dest;
	while (index < n)
	{
		*dest = *src;
		if (*src)
			++src;
		++dest;
		++index;
	}
	return (temp);
}
