/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pre_combination.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 20:23:05 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 22:39:13 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_pre_combination_1(char **argv)          //가능한 조합인지
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (argv[1][i] != '\0')
    {
		if (i == 8 || i == 16 || i == 24)
		{
			if (count == 0)
				write(1, "Error\n", 6);
			count = 0;
		}
		if (argv[1][i] == '1')               //1은 한 번만 입력되어야 함
            count++;
		if (count > 1)
		{   
        	write(1, "Error\n", 6);
			return (1);
		}
		i++;
    }
	if (count == 0)
		write(1, "Error\n", 6);
	return (-1);
}

int	ft_pre_combination_2(char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (argv[1][i] != '\0')
	{
		if (i == 8 || i == 16 || i == 24)
			count = 0;
		if (argv[1][i] == '2')
			count++;
		if (count == 4)                          //2는 네 번 입력될 수 없음
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (-1);
}

int	ft_pre_combination_3(char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (argv[1][i] != '\0')
	{
		if (i == 8 || i == 16 || i == 24)
			count = 0;
		if (argv[1][i] == '3')
			count++;
		if (count == 3 || count == 4)         //3은 세 번 혹은 네 번 입력될 수 없음
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (-1);
}

int ft_pre_combination_4(char **argv)
{
	int i;
	int count;

	i = 0;
	count = 0;
	while (argv[1][i] != '\0')
	{
		if (i == 8 || i == 16 || i == 24)
			count = 0;
		if (argv[1][i] == '4')
			count++;
		if (count == 2 || count == 3 || count == 4)      //4는 한 번 입력되거나 안되거나
		{
			write(1, "Error\n", 6);
			return (1);
		}
		i++;
	}
	return (-1);
}
