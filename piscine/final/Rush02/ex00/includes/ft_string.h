/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/31 01:58:38 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 15:43:26 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include "ft_defs.h"

int		ft_strlen(char *str);
t_bool	ft_isspace(char c);

void	ft_fputstr(int fd, char *str);
void	ft_fputstrn(int fd, char *str);
void	ft_putstr(char *str);
void	ft_putstrn(char *str);
void	ft_putstrs(char *str);

char	*ft_dynstr(char *orig, char *str, int ssize);

char	*ft_strrdup(char *from, char *to);

int		ft_strncmp(int n, char *s1, char *s2);
int		ft_strcmp(char *s1, char *s2);
int		ft_nbrcmp(char *nb1, char *nb2);

char	*ft_strdup(char *str);

#endif
