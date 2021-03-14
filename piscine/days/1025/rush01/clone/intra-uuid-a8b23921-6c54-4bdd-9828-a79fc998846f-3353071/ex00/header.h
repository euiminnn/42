/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   header.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/25 15:53:12 by echung            #+#    #+#             */
/*   Updated: 2020/10/25 16:07:44 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HEADER_H
# define HEADER_H
# include <unistd.h>

void	rush(char **argv);
void	ft_print_error(void);
void	check_col(int row, int col, char table[row][col]);
void	check_line(int row, int col, char table[row][col]);
int	count(int *index);
void	put_cols(char *col, char table[4][4]);
int	put_rows(char *row, char *table[4][4]);
int	check(int x, int y, int val, char table[4][4]);
void	put_index(char table[4][4], char *col, char *row);
int	put_char_row(char table[4][4], int i, int j, );
int	put_char_col(char table[4][4], int i, int j, );
void	print(int row, int col, char table[row][col]);
void	swap(char *x, char *y);
