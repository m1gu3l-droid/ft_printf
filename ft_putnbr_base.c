/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 20:32:45 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/06 17:00:03 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base(long long int nbr)
{
	int		size;
	char	*base;

	size = 0;
	base = "0123456789abcdef";
	if (nbr < 0)
	{
		size = write(1, "-", 1);
		nbr *= -1;
	}
	if (nbr >= 16)
	{
		size += ft_putnbr_base((nbr / 16));
		size += ft_putnbr_base((nbr % 16));
	}
	else
		size += ft_putchar(base[nbr]);
	return (size);
}
