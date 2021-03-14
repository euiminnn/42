/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04put_rows_cols.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 12:06:20 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 13:36:08 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//any functions?
//

int	put_rows(char *row, char *table[4][4])          //too long. shd be <25
{
	int i;

	int = 0;
	while (i < 4)
	{
		if (row[i] == '1' && row[i + 4] == '2')
			table[i][3] = '3';
		else if (row[i] == '2' && row[i + 4] == '3')
			table[i][1] = '4';
		if (row[i] == '4')
		{
			table[i][0] = '1';
			table[i][1] = '2';
			table[i][2] = '3';
			table[i][3] = '4';
		}
		else if (row[i] == '1')
			table[i][0] = '4';
		i++;
	}
	while (i < 8)
	{
		if (row[i] == '1' && row[i - 4] == '2')
			table[i - 4][0] = '3';
		else if (row[i] == '2' && row[i - 4] == '3')
			table[i - 4][2] = '4';
		if (row[i] == '4')
		{
			if (row[i] - 4 != '1')
			{
				write(1, "\n", 1);
				break;
			}
			table[i - 4][3] = '1';
			table[i - 4][2] = '2';
			table[i - 4][1] = '3';
			table[i - 4][0] = '4';
		}
		else if (row[i] == '1')
			table[i - 4][3] = '4';
		i++;
	}
	return (0);
}

void	put_cols(char *col, char table[4][4])        //too long. shd be <25
{
	int i;
	
	i = 0;
	while (i < 4)
	{
		if (col[i] == '1' && col[i + 4] == '2')
			table[3][i] = '3';
		else if (col[i] == '2' && col[i + 4] == '3')
			table[1][i] = '4';
		if (col[i] == '4')
		{
			table[0][i] = '1';
			table[1][i] = '2';
			table[2][i] = '3';
			table[3][i] = '4';
		}
		else if (col[i] == '1')
			table[0][i] = '4';
		i++;
	}
	while (i < 8)
	{
		if (col[i] == '1' && col[i - 4] == '2')
			table[i - 4][0] = '3';
		else if (col[i] == '2' && col[i - 4] == '3')
			table[i - 4][2] = '4';
		if (col[i] == '4')
		{
			table[3][i - 4] = '1';
			table[2][i - 4] = '2';
			table[1][i - 4] = '3';
			table[0][i - 4] = '4';
		}
		else if (col[i] == '1')
			table[3][i - 4] = '4';
		i++;
	}
}
