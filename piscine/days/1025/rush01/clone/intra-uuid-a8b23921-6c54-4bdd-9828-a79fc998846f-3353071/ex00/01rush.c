/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01rush.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 10:20:46 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 14:56:27 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//put_rows(row, table);
//put_cols(col, table);
//put_index(4, 4, table);
//check_line(4, 4, table);
//check_col(4, 4, table);
//print(4, 4, table);

void	rush(char **argv)
{
	char table[4][4] = {
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'},
		{'0', '0', '0', '0'}
	};

	char row[8];
	char col[8];
	int i;
	int j;
	int done;

	i = 0;
	j = 0;
	while (j < 8)
	{
		col[j] = argv[1][i];
		j++;
		i += 2;
	}
	j = 0;
	while (j < 8)
	{
		row[j] = argv[1[i];
		j++;
		i += 2;
	}
	put_rows(row, table);
	put_cols(col, table);
	done = 0;
	while (done <= 16)
	{
		put_index(4, 4, table);
		check_line(4, 4, table);
		check_col(4, 4, table);
		done++;
	}
	print(4, 4, table);
}
