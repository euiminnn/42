/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jinglee <jinglee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:23:39 by jinglee           #+#    #+#             */
/*   Updated: 2020/10/18 11:45:04 by jinglee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_col(char *data, int x)
{
	int col;

	col = 0;
	while (col < x)
	{
		if (col == 0 || col == x - 1)
			ft_putchar(data[0]);
		else
			ft_putchar(data[1]);
		++col;
	}
	ft_putchar('\n');
}

void	print_row(char *data, int x, int y)
{
	int row;

	row = 0;
	while (row < y)
	{
		if (row == 0 || row == y - 1)
			print_col(&data[0], x);
		else
			print_col(&data[2], x);
		++row;
	}
}

void	rush(int x, int y)
{
	print_row("o-| ", x, y);
}
