#include <stdio.h>  
#include <stdlib.h>

void    swap(char *x, char *y)
{
    char temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void	prnt(int row, int col, char table[row][col])
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

int 	putchar(char table[4][4], int i, int j, )
{
    int temp;
	temp = *table[i][j];
	int z = 0;
	int a = 3;
	char right[4];
	char rev[4];
	
	while (z < 4)
	{
		right[z] = table[i + z][j];
		rev[a] = table[i + z][j];
	}		
	if(count(right[4]))
	
	count(rev[4]);

}

void    put_index(char table[4][4], char *col, char *row)
{
    int i = 0;
    int j = 0;
	int temp = 1;
    
    while (i < 4)
    {
        while (j < 4)
        {
            if (table[i][j] == '0')
            {
              	while (temp < 5)
			  	{
					int val = table[i][j];
					if(check(i, j, temp, table[4][4]) == 1)
					{
					
				
			  		}
            	}
            else	
            {
                i++;
                j++;
            }
            j++;
        }
        i++;
    }
}
int		check(int x, int y, int val, char table[4][4])
{
	int a = 0;
	while (a < 4)
	{
		if (val == table[x][y + a])
			return (0);
		else if(val == table[x + a][y])
			return (0);
		else		
			return (1);
		a++;
	}
}

int     put_rows(char *row, char *table[4][4])
{
	int i;

	i = 0;
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

int     put_cols(char *col, char table[4][4])
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

int count(int *index)
{
   int i = 0;
   int j = 1;
   int count = 1;

    while (i < 4)
    {
        while (j < 4)
        {
            if(index[i] < index[j])
            {   count++;
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
void	check_line(int row, int col, char table[row][col])
{
	int i;
	int i;
	int check;
	int ch;
	int save;

	i = 0;
	while (i < row)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < col)
		{
			ch = ch + table[i][i] - '0';
			if (table[i][i] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			table[i][save] = (10 - ch) + '0';
		i++;
	}
}

void	check_col(int row, int col, char table[row][col])
{
	int i;
	int i;
	int check;
	int ch;
	int save;

	i = 0;
	while (i < col)
	{
		i = 0;
		check = 0;
		ch = 0;
		while (i < row)
		{
			ch = ch + table[i][i] - '0';
			if (table[i][i] == '0')
			{
				check++;
				save = i;
			}
			i++;
		}
		if (check == 1)
			table[save][i] = (10 - ch) + '0';
		i++;
	}
}

void	rush(char **argv)
{
	char	table[4][4] = {{'0', '0', '0', '0'}, {'0', '0', '0', '0'},
		{'0', '0', '0', '0'}, {'0', '0', '0', '0'}};

	char	row[8];
	char	col[8];
	int		i;
	int		j;
	int		i;

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
    if(complete_cols(row, table) != 0)
    {
        
    }
	int a = complete_rows(row, table);
    if (a == 0)
    
	complete_cols(col, table);
	i = 0;
	while (i <= 16)
	{
		put_index(4, 4, table);
		check_line(4, 4, table);
		check_col(4, 4, table);
		i++;
	}
	prnt(4, 4, table);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		write(1, "Error\n", 6);
	}
	rush(argv);
}
