/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   c03.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jseo <jseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/26 17:59:20 by jseo              #+#    #+#             */
/*   Updated: 2020/10/26 18:01:49 by jseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef C03_H
# define C03_H

int		ft_strcmp(char *s1, char *s2);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char		*ft_strcat(char *dest, char *src);
char		*ft_strncat(char *dest, char *src, unsigned int nb);
char		*ft_strstr(char *str, char *to_find);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);

#endif
