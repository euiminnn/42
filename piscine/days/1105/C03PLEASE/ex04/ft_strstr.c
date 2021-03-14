/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 18:31:32 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 21:45:09 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	while (*s2 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	if (*s2 == '\0')
		return (0);
	return (*(unsigned char*)s1 - *(unsigned char*)s2);
}

char	*ft_strstr(char *str, char *to_find)
{
	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		if (ft_strcmp(str, to_find) == 0)
			return (str);
		str++;
	}
	return (0);
}
