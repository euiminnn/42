/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07swap_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 14:03:14 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 14:06:13 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//any functions??

void	swap(char *x, char *y)
{
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}

void	print(int row, int col, char table[row][col])
{
	int r;
	int c;

	r = 0;
	while (r < row)
	{
		c = 0;
		while (c < col)
		{
			write(1, &table[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}
