/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:20 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 07:43:33 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int	ft_hexlen(unsigned long long n);

int	ft_print_hex(unsigned long long n, int specifier)
{
	int	len;

	if (n == 0)
		return (ft_print_char('0'));
	len = ft_hexlen(n);
	if (n >= 16)
		ft_print_hex(n / 16, specifier);
	n %= 16;
	if (n < 16)
	{
		if (n < 10)
			ft_print_char(n + '0');
		else
		{
			if (specifier == 'x')
				ft_print_char(n - 10 + 'a');
			if (specifier == 'X')
				ft_print_char(n - 10 + 'A');
		}
	}
	return (len);
}

static int	ft_hexlen(unsigned long n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 16;
		len++;
	}
	return (len);
}
