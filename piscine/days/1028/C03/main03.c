/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 18:22:34 by jseo              #+#    #+#             */
/*   Updated: 2020/10/29 13:12:42 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "c03.h"
#include "ftstring.h"
#include <string.h>
#include <stdio.h>

int		main(void)
{
	//char arr1[13] = "Hello World\n";
	//char arr2[13] = "Hello Worl\n";
	//printf("%d", strcmp(arr1, arr2));
	//printf("%d", ft_strcmp(arr1, arr2));
	
	char arr1[10] = "Hello jseo";
	char arr2[10] = "Healo chan";
	printf("%d", strncmp(arr1, arr2, 2));
	printf("%d", ft_strncmp(arr1, arr2, 2));
	
	//char arr1[12] = "Hello";
	//char arr2[7] = " Jseo\n";
	//printf("%s", strcat(arr1, arr2));
	//char arr3[12] = "Hello";
	//char arr4[7] = " Jseo\n";
	//printf("%s", ft_strcat(arr3, arr4));

	//char arr1[12] = "Hello";
	//char arr2[7] = " Jseo\n";
	//printf("%s", strncat(arr1, arr2, 2));
	//char arr3[12] = "Hello";
	//char arr4[7] = " Jseo\n";
	//printf("%s", ft_strncat(arr3, arr4, 2));
	
	//char arr1[12] = "aab\n";
	//char arr2[7] = "ab";
	//printf("%s", strstr(arr1, arr2));
	//char arr3[12] = "aab\n";
	//char arr4[7] = "ab";
	//printf("%s", ft_strstr(arr3, arr4));

	//char arr1[12] = "Hello";
	//char arr2[7] = " Jseo\n";
	//printf("%lu", strlcat(arr1, arr2, 20));
	//printf("%s", arr1);
	//char arr3[12] = "Hello";
	//char arr4[7] = " Jseo\n";
	//printf("%u", ft_strlcat(arr3, arr4, 20));
	//printf("%s", arr3);
	
	return (0);
}
