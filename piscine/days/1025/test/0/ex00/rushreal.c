/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushreal.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyospark <hyospark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 18:44:55 by hyospark          #+#    #+#             */
/*   Updated: 2020/10/25 21:20:49 by hyospark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	swap(int *a, int *b)
{ //값을 이동하기 위한 함수
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
//final 출력하는 함수
void	print_all(char table[4][4])
{
	int r;
	int c;

	r = 0;
	while (r < 4)
	{
		c = 0;
		while (c < 4)
		{
			write(1, &table[r][c], 1);
			c++;
		}
		write(1, "\n", 1);
		r++;
	}
}

//한 방향에서 보이는 블럭의 갯수 리턴 함수
int		count(int *arr)
{
   int i = 0;
   int j = 1;
   int c = 1;

    while (i < 3)
    {
        while (j < 4)
        {
            if(arr[i] < arr[j])
            {   c++;
				i++;
				break;
			}
			else
				j++;
        }
        j = i + 1;
    }
    return (c);
}

void	print_arr(int size, int *arr, int compare[5][24])
{ //값을 프린트 하기위한 함수
	int z = 0;
	int a = 3;
	int j = 0;
	int right[4];
	int left[4];

	while (z < 4)
	{
		right[z] = arr[z];
		left[a] = arr[z];
		z++;
		a--;
	}

	int i;
	i = 0;
	while (j < 25)
	{
		if(compare[0][j] == 0)
		{
			compare[5][j] = count(right);
			while (i < size)
			{
				compare[i][j] = arr[i];
				printf("%d", compare[i][j]);
				i++;
			}
			compare[6][j] = count(left);
		}
		j++;
	}
}

void permutation(int depth, int *arr, int compare[5][24])
{ //재귀함수 함수
	if(4 == depth)
	{ //r이 depth(0) 일때 1출력함수 호출
		print_arr(depth, arr, compare);
		printf("\n");
		return;
	}
	for(int i=depth; i<4; i++)
	{
		swap(&arr[i], &arr[depth]);
		permutation(depth+1, arr, compare);
		swap(&arr[i], &arr[depth]); //배열을 제자리로 보내주기 위함
	}
}

int		c(char *row, char *table[4][4], int compare[5][24], int )
{
	if (row[i] == compare[4][j] && row[i + 4] == compare[5][j])
		{
			table[0][i] = compare[0][i];
			table[1][i] = compare[1][i];
			table[2][i] = compare[2][i];
			table[3][i] = compare[3][i];
		}
}

int     put_rows(char *row, char *table[4][4], int compare[5][24], int i)
{

	int right;
	int left;
	int j;

	j = 0;
	while (i < 4)
	{
		while (j < 25)
		{
			if (row[i] == compare[4][j] && row[i + 4] == compare[5][j])
			{
				table[0][i] = compare[0][j];
				table[1][i] = compare[1][j];
				table[2][i] = compare[2][j];
				table[3][i] = compare[3][j];
				i++;
				if ()
				{
					/* code */
				}


			}
			else if (j == 23 && i == 0);
			{
				printf("Error\n");
				return (1);
			}
			else if (j == 23)
			{
				i--;
				put_rows(row, table[4][4], compare[5][24], i);
			}
				j++;
		}
		i++;
	}
    return (0);
}

int		put_cols(char *col, char table[4][4])
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
			table[1][i - 4] = '3';
		else if (col[i] == '2' && col[i - 4] == '3')
			table[2][i - 4] = '4';
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
	return (0);
}

void	rush(char **argv)
{
	char	table[4][4] = {{'0', '0', '0', '0'}, {'0', '0', '0', '0'},
		{'0', '0', '0', '0'}, {'0', '0', '0', '0'}};

	char	row[8];
	char	col[8];
	int		i;
	int		j;

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
		row[j] = argv[1][i];
		j++;
		i += 2;
	}
	int compare [5][24] = {0, };
	int arr[4] = {1,2,3,4};
	permutation(0, arr, compare);
	put_rows(row, table, compare, 0);
	put_rows(row, table, compare, 0);
	i = 0;

	print_all(table);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	rush(argv);
}
