/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minsunki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 13:20:20 by minsunki          #+#    #+#             */
/*   Updated: 2020/11/01 15:51:14 by minsunki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_defs.h"
#include "ft_dict.h"
#include <stdlib.h>

t_error	ft_error_handler(t_error err, t_dict *dict)
{
	ft_dict_free(dict);
	if (err == e_error)
		ft_fputstrn(2, "Error");
	else if (err == e_dict)
		ft_fputstrn(2, "Dict error");
	return (e_error);
}
