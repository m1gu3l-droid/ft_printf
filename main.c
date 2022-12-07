/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:54:11 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/07 00:25:59 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	main(void)
{
	int				i;
	int				size;
	int				origin;
	unsigned int	umax;
	char			d;
	char			*str = "1234567890";
	void			*ptr;

	i = -99;
	umax = UINT_MAX;
	d = 'X';

	printf("FLAG 0\n");
	size = ft_printf("Hello, world!\n");
	printf("f size: %d\n", size);
	origin = printf("Hello, world!\n");
	printf("o size: %d\n\n", origin);

	printf("FLAG C\n");
	size = ft_printf("Hello, %cth world!\n", d);
	printf("f size c: %d\n", size);
	origin = printf("Hello, %cth world!\n", d);
	printf("o size c: %d\n\n", origin);

	printf("FLAG S\n");
	size = ft_printf("Hello, %s world!\n", str);
	ft_printf("f size s: %d\n", size);
	origin = printf("Hello, %s world!\n", str);
	printf("o size s: %d\n\n", origin);

	printf("FLAG P\n");
	size = ft_printf("Hello, %p world!\n", ptr);
	ft_printf("f size p: %d\n", size);
	origin = printf("Hello, %p world!\n", ptr);
	printf("o size p: %d\n\n", origin);

	printf("FLAG D\n");
	size = ft_printf("Hello, %d world!\n", i);
	ft_printf("f size d: %d\n", size);
	origin = printf("Hello, %d world!\n", i);
	printf("o size d: %d\n\n", origin);

	printf("FLAG I\n");
	size = ft_printf("Hello, %i world!\n", i);
	ft_printf("f size i: %d\n", size);
	origin = printf("Hello, %i world!\n", i);
	printf("o size i: %d\n\n", origin);

	printf("FLAG U\n");
	size = ft_printf("Hello, %u world!\n", umax);
	ft_printf("f size u: %d\n", size);
	origin = printf("Hello, %u world!\n", umax);
	printf("o size u: %d\n\n", origin);

	printf("FLAG x\n");
	size = ft_printf("Hello, %xth world!\n", i);
	ft_printf("f size x: %d\n", size);
	origin = printf("Hello, %xth world!\n", i);
	printf("o size x: %d\n\n", origin);

	printf("FLAG X\n");
	size = ft_printf("Hello, %Xth world!\n", i);
	ft_printf("f size X: %d\n", size);
	origin = printf("Hello, %Xth world!\n", i);
	printf("o size X: %d\n\n", origin);

	printf("FLAG %%\n");
	size = ft_printf("Hello, %% world!\n");
	ft_printf("f size %%: %d\n", size);
	origin = printf("Hello, %% world!\n");
	printf("o size %%: %d\n\n", origin);
	return (0);
}
