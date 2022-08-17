/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:16 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 07:56:34 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int	ft_hexlen(unsigned long long n);
static int	ft_print_hex_ptr(unsigned long long n);

int	ft_print_address(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += ft_print_str("0x");
	len += ft_print_hex_ptr(ptr);
	return (len);
}

static int	ft_print_hex_ptr(unsigned long long n)
{
	int	len;

	if (n == 0)
		return (ft_print_char('0'));
	len = ft_hexlen(n);
	if (n >= 16)
		ft_print_hex_ptr(n / 16);
	n %= 16;
	if (n < 16)
	{
		if (n < 10)
			ft_print_char(n + '0');
		else
			ft_print_char(n - 10 + 'a');
	}
	return (len);
}

static int	ft_hexlen(unsigned long long n)
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
