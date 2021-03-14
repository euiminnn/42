/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict_sorter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naykim <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 19:15:59 by naykim            #+#    #+#             */
/*   Updated: 2020/11/01 19:16:07 by naykim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_dict.h"
#include "ft_string.h"

void	ft_dict_sorter(t_dict *darr)
{
	int		i;
	int		k;
	t_dict	temp;

	i = 0;
	while (darr[i + 1].key)
	{
		k = 1;
		while (darr[k + i].key)
		{
			if (ft_nbrcmp(darr[i].key, darr[i + k].key) > 0)
			{
				temp = darr[i];
				darr[i] = darr[i + k];
				darr[i + k] = temp;
			}
			k++;
		}
		i++;
	}
}
