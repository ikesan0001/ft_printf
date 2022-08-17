/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_address.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:16 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 07:00:12 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int ft_addresslen(uintptr_t ptr);

int	ft_print_address(uintptr_t ptr)
{
	int	len;

	len = 0;
	len += ft_print_str("0x");
	len += ft_print_hex(ptr, 'x');
	return (0);
}

static int ft_addresslen(uintptr_t ptr)
{
	int	len;

	len = 0;
	while (ptr != 0)
	{
		ptr /= 16;
		len++;
	}
	return (len);
}
