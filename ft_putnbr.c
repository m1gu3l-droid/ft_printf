/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/22 21:45:36 by fnovais-          #+#    #+#             */
/*   Updated: 2022/08/22 21:45:38 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(long long n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		size += ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		size += ft_putnbr(n / 10);
	}
	size += ft_putchar((n % 10 + 48));
	return (size);
}
