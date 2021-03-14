/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:47:09 by echung            #+#    #+#             */
/*   Updated: 2020/11/05 15:35:43 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if (*str == *to_find)
		{
			str++;
			to_find++;
		}
		if (*str != *to_find)
			return (0);
	}
	return (str);
}

#include <string.h>
#include <stdio.h>

int main()
{
	char *str = "caab";
	char *result_my;

	result_my = strstr(str, "ab");
	printf("%s", result_my);
}
