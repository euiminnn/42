/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   05check_val.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 13:36:51 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 13:38:45 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//any functions?

int	check(int x, int y, int val, char table[4][4])
{
	int a = 0;

	while (a < 4)
	{
		if (val == table[x][y + a])
			return (0);
		else if (val == table[x + a][y])
			return (0);
		else
			return (1);
		a++;
	}
}
