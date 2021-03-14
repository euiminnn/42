/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/27 13:41:04 by echung            #+#    #+#             */
/*   Updated: 2020/10/27 21:42:57 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_uppercase(char low)
{
	if ('a' <= low && low <= 'z')
		low = low - 32;
	return (low);
}

char	ft_lowercase(char up)
{
	if ('A' <= up && up <= 'Z')
		up = up + 32;
	return (up);
}

char	*ft_strcapitalize(char *str)
{
	int		index;
	char	*temp;

	temp = str;
	index = 1;
	while (*str != '\0')
	{
		if (!(48 <= *str && *str <= 57) &&
			!('a' <= *str && *str <= 'z') &&
			!('A' <= *str && *str <= 'Z'))
			index = 0;
		if (index == 1)
			*str = ft_uppercase(*str);
		else if (index > 1)
			*str = ft_lowercase(*str);
		str++;
		index++;
	}
	return (temp);
}
