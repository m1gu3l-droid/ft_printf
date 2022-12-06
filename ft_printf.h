/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fnovais- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:52:49 by fnovais-          #+#    #+#             */
/*   Updated: 2022/12/06 23:34:01 by fnovais-         ###   ########.fr       */
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
unsigned int		ft_putnbr(long long int nb);
unsigned int		ft_putnbr_unsigned(long int nb);
int					ft_putnbr_base(long long int nbr);
int					ft_putnbr_ubase(long long int nbr);
int					ft_putptr(unsigned long long int n);
int					ft_printf(const char *str, ...);
int					ft_itoa(int n);
size_t				ft_strlen(const char *s);

#endif
