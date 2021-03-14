/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/18 10:21:44 by jseo              #+#    #+#             */
/*   Updated: 2020/10/27 20:18:35 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>

extern void		ft_putchar(char c);
extern void		ft_print_alphabet(void);
extern void		ft_print_reverse_alphabet(void);
extern void		ft_print_numbers(void);
extern void		ft_is_negative(int n);
extern void		ft_print_comb(void);
extern void		ft_print_comb2(void);
extern void		ft_putnbr(int nb);
extern void		ft_print_combn(int n);

extern void		ft_ft(int *nbr);
extern void		ft_ultimate_ft(int *********nbr);
extern void		ft_swap(int *a, int *b);
extern void		ft_div_mod(int a, int b, int *div, int *mod);
extern void		ft_ultimate_div_mod(int *a, int*b);
extern void		ft_putstr(char *str);
extern int		ft_strlen(char *str);
extern void		ft_rev_int_tab(int *tab, int size);
extern void		ft_sort_int_tab(int *tab, int size);

extern char		*ft_strcpy(char *dest, char *src);
extern char		*ft_strncpy(char *dest, char *src, unsigned int n);
extern int		ft_str_is_alpha(char *str);
extern int		ft_str_is_numeric(char *str);
extern int		ft_str_is_lowercase(char *str);
extern int		ft_str_is_uppercase(char *str);
extern int		ft_str_is_printable(char *str);
extern char		*ft_strupcase(char *str);
extern char		*ft_strlowcase(char *str);
extern char		*ft_strcapitalize(char *str);
extern unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
extern void		ft_putstr_non_printable(char *str);
extern void		*ft_print_memory(void *addr, unsigned int size);

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putnbr(nb / 10);
		ft_putchar(8 + 48);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else
	{
		if (nb > 9)
		{
			ft_putnbr(nb / 10);
		}
		ft_putchar(nb % 10 + 48);
	}
}


int			main(void)
{
	/*
	ft_putchar('1');
	ft_print_alphabet();
	ft_print_reverse_alphabet();
	ft_print_numbers();
	ft_is_negative(-42);
	t_is_negative(42);
	ft_print_comb();
	ft_print_comb2();
	ft_putnbr(42);
	ft_putnbr(-42);
	ft_putnbr(-2147483648);
	ft_print_combn(3);
	write(1, "\n",1);
	ft_print_combn(7);
	write(1, "\n",1);
	ft_print_combn(9);
	write(1, "\n",1);
	*/

	/*
	int n1;
	int *p1 = &n1;
	ft_ft(p1);
	ft_putchar(*p1 / 10 + 48);
	ft_putchar(*p1 % 10 + 48);
	int n2;
	int *p2_1 = &n2;
	int **p2_2 = &p2_1;
	int ***p2_3 = &p2_2;
	int ****p2_4 = &p2_3;
	int *****p2_5 = &p2_4;
	int ******p2_6 = &p2_5;
	int *******p2_7 = &p2_6;
	int ********p2_8 = &p2_7;
	int *********p2_9 = &p2_8;
	ft_ultimate_ft(p2_9);
	ft_putchar(*********p2_9 / 10 + 48);
	ft_putchar(*********p2_9 % 10 + 48);
	int a = 2;
	int b = 1;
	ft_swap(&a, &b);
	ft_putchar(a + 48);
	ft_putchar(b + 48);
	int d;
	int m;
	int *div = &d;
	int *mod = &m;
	ft_div_mod(9, 4, div, mod);
	ft_putchar(d + 48);
	ft_putchar(m + 48);
	int d = 9;
	int m = 4;
	int *div = &d;
	int *mod = &m;
	ft_ultimate_div_mod(div, mod);
	ft_putchar(d + 48);
	ft_putchar(m + 48);
	char *str = "hi this is jseo";
	ft_putstr(str);
	int length = ft_strlen("hi jseo");
	ft_putchar(length + 48);
	int index = -1;
	int tab[9] = { 1, 2, 3, 4, 9, 8, 7, 6, 5 };
	ft_rev_int_tab(tab, 9);
	while (++index < 9)
	{
		ft_putchar(tab[index] + 48);
	}
	int index = -1;
	int tab[10] = { 10, 3, 1, 4, 2, 9, 8, 7, 6, 5 };
	ft_sort_int_tab(tab, 10);
	while (++index < 10)
	{
		ft_putnbr(tab[index]);
	}
	*/

	/*
	char preset[12];
	write(1, ft_strcpy(preset, "Hello World\n"), 12);
	char preset[16];
	write(1, ft_strncpy(preset, "Hello World\n", 16), 16);
	char *alpha_1 = "Hello";
	char *alpha_2 = "";
	char *alpha_3 = "he11o";
	ft_putchar(ft_str_is_alpha(alpha_1) + 48);
	ft_putchar(ft_str_is_alpha(alpha_2) + 48);
	ft_putchar(ft_str_is_alpha(alpha_3) + 48);
	char *numeric_1 = "0";
	char *numeric_2 = "";
	char *numeric_3 = "123a3456";
	ft_putchar(ft_str_is_numeric(numeric_1) + 48);
	ft_putchar(ft_str_is_numeric(numeric_2) + 48);
	ft_putchar(ft_str_is_numeric(numeric_3) + 48);
	char *lower_1 = "hi space";
	char *lower_2 = "nonespace";
	char *lower_3 = "";
	char *lower_4 = "hi1234";
	char *lower_5 = "Hi";
	ft_putchar(ft_str_is_lowercase(lower_1) + 48);
	ft_putchar(ft_str_is_lowercase(lower_2) + 48);
	ft_putchar(ft_str_is_lowercase(lower_3) + 48);
	ft_putchar(ft_str_is_lowercase(lower_4) + 48);
	ft_putchar(ft_str_is_lowercase(lower_5) + 48);
	char *upper_1 = "HI SPACAE";
	char *upper_2 = "NONESPACE";
	char *upper_3 = "";
	char *upper_4 = "HI1234";
	char *upper_5 = "Hi";
	ft_putchar(ft_str_is_uppercase(upper_1) + 48);
	ft_putchar(ft_str_is_uppercase(upper_2) + 48);
	ft_putchar(ft_str_is_uppercase(upper_3) + 48);
	ft_putchar(ft_str_is_uppercase(upper_4) + 48);
	ft_putchar(ft_str_is_uppercase(upper_5) + 48);
	char *print_1 = "Hell0";
	char *print_2 = "hello\7F";
	ft_putchar(ft_str_is_printable(print_1) + 48);
	ft_putchar(ft_str_is_printable(print_2) + 48);
	char upcase[7] = "a123fg";	
	char *p = upcase;
	p = ft_strupcase(p);
	while (*p)
	{
		ft_putchar(*p++);
	}
	char lowcase[12] =  "ABC3214ggHHH";
	char *p = lowcase;
	p = ft_strlowcase(p);
	while (*p)
	{
		ft_putchar(*p++);
	}
	char capital[100] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char *p;
	p = ft_strcapitalize(capital);
	write(1, p, 100);
	char lcpy[100];
	int p;
	p = strlcpy(lcpy, "abasdf", 4);
	write(1, lcpy, 10);
	ft_putchar(p + 48);
	p = ft_strlcpy(lcpy, "efasdf", 4);
	write(1, lcpy, 10);
	ft_putchar(p + 48);
	char hex[100] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(hex);
	*/	

	//char arr[100] = "this is good to go!\7f\7f";
	//ft_print_memory((void *)arr, 23);
	

	/*
	char lcpy[100];
	int p;
	p = strlcpy(lcpy, "abasdf", 0);
	write(1, lcpy, 10);
	ft_putchar(p + 48);
	p = ft_strlcpy(lcpy, "efasdf", 0);
	write(1, lcpy, 10);
	ft_putchar(p + 48);
	*/

	char lowcase[12] =  "ABC3214ggHHH";
	char *p = lowcase;
	p = ft_strlowcase(p);
	while (*p)
	{
		ft_putchar(*p++);
	}
	return (0);
}

