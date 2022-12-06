/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:52:56 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/06 18:27:32 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	int		i;
	int		size;
	va_list	ptr;

	i = -1;
	size = 0;
	va_start(ptr, str);
	while (str[++i] != '\0')
	{
		if (str[i] == '%')
		{
			i++;
			if (str[i] == 'c')
				size += ft_putchar((va_arg(ptr, int)));
			if (str[i] == 's')
				size += ft_putstr((va_arg(ptr, char *)));
			if (str[i] == 'p')
				size += ft_putptr((va_arg(ptr, unsigned long long int)));
			if (str[i] == 'd' || str[i] == 'i')
				size += ft_itoa((va_arg(ptr, int)));
			if (str[i] == 'u')
				size += ft_putnbr_unsigned((va_arg(ptr, unsigned int)));
			if (str[i] == 'x')
				size += ft_putnbr_base((va_arg(ptr, unsigned int)));
			if (str[i] == 'X')
				size += ft_putnbr_ubase((va_arg(ptr, unsigned int)));
			if (str[i] == '%')
				size += write(1, "%", 1);
		}
		else
			size += ft_putchar(str[i]);
	}
	return (size);
}
