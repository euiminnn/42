/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: echung <echung@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/29 00:22:28 by echung            #+#    #+#             */
/*   Updated: 2020/10/29 13:29:33 by echung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int result;

	result = nb;
	if (nb == 1 || nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		result = result * (nb - 1);
		nb--;
	}
	return (result);
}
