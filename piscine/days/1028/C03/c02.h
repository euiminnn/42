/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c02.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:53:15 by jseo              #+#    #+#             */
/*   Updated: 2020/10/26 17:54:09 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C02_H
# define C02_H

char		*ft_strcpy(char *dest, char *src);
char		*ft_strncpy(char *dest, char *src, unsigned int n);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_str_is_lowercase(char *str);
int		ft_str_is_uppercase(char *str);
int		ft_str_is_printable(char *str);
char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
void		ft_putstr_non_printable(char *str);
void		*ft_print_memory(void *addr, unsigned int size);

#endif
