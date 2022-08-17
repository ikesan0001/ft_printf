/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:05:22 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 03:40:31 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <limits.h>

int		ft_printf(const char *fmt, ...);

int		ft_print_char(int c);
int		ft_print_str(char *s);
int		ft_print_address(unsigned long n);
int		ft_print_nbr(int n);
int		ft_print_unnbr(unsigned int n);
int		ft_print_hex(unsigned int n, int specifier);

#endif
