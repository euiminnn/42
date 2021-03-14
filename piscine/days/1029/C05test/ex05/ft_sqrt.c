/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 02:07:16 by echung            #+#    #+#             */
/*   Updated: 2020/10/29 16:14:29 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int smallnb;

	if (nb < 1)
		return (0);
	smallnb = 1;
	while (smallnb * smallnb < nb)
		smallnb++;
	if (smallnb * smallnb == nb)
		return (smallnb);
	else
		return (0);
}
