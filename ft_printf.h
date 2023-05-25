/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:52:49 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/07 15:31:52 by fnovais-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int					ft_putchar(char c);
int					ft_putstr(char *str);
unsigned int		ft_putnbr(long long nb);
unsigned int		ft_putnbr_unsigned(long long nb);
int					ft_putnbr_base(long long nbr);
int					ft_putnbr_ubase(long long nbr);
int					ft_putptr(unsigned long long n);
int					ft_printf(const char *str, ...);
int					ft_itoa(int n, int size);
size_t				ft_strlen(const char *s);

#endif
