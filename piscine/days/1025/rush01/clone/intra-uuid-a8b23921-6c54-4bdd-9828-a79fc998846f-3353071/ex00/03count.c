/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03count.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:53:07 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 11:55:02 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//any functions?

int	count(int *index)
{
	int i = 0;
	int j = 1;
	int count = 1;

	while (i < 4)
	{
		while(j < 4)
		{
			if (index[i] < index[j])
			{
				count++;
				break;
			}
			else
				j++;
		}
		i++;
		j = i + 1;
	}
	return (count);
}
