/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:11:13 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/05 20:22:24 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putptr(unsigned long long n)
{
	unsigned int	size;

	if (!n)
		return (write(1, "(nil)", 5));
	size = 2;
	write(1, "0x", 2);
	if (n < 16)
	{
		size += write(1, &"0123456789abcdef"[n], 1);
	}
	if (n >= 16)
	{
		size += ft_putnbr_base(n / 16);
		size += ft_putnbr_base(n % 16);
	}
	return (size);
}
