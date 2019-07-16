/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: igarbuz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/24 13:04:44 by igarbuz           #+#    #+#             */
/*   Updated: 2019/01/24 13:04:48 by igarbuz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_error(int er)
{
	if (er < 0)
	{
		if (er == -1)
			;
		exit(EXIT_FAILURE);
	}
	else
		write(1, "usage : ft_error(int er), er < 0\n", 33);
}
