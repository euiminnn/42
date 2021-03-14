/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02check_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 11:36:01 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 13:54:29 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//any functions??

void	check_line(int row, int col, char table[row][col])
{
	int done;
	int i;
	int check;
	int ch;
	int save;

	done = 0;
	while (done < row)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < col)
		{
			ch = ch + table[done][i] - '0';
			if (table[done][i] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			table[done][save] = (10 - ch) + '0';
		done++;
	}
}

void	check_col(int row, int col, char table[row][col])
{
	int done;
	int i;
	int check;
	int ch;
	int save;

	done = 0;
	while (done < col)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < row)
		{
			ch = ch + table[i][done] - '0';
			if (table[i][done] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			table[save][done] = (10 - ch) + '0';
		done++;
	}
}
