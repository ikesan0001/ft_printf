/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:32 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 04:50:30 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int	ft_unnumlen(unsigned int n);

int	ft_print_unnbr(unsigned int n)
{
	int	len;

	if (n == 0)
		return (ft_print_char('0'));
	len = ft_unnumlen(n);
	if (n >= 10)
		ft_print_unnbr(n / 10);
	n %= 10;
	ft_print_char(n + '0');
	return (len);
}

static int	ft_unnumlen(unsigned int n)
{
	int	len;

	len = 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
