/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:25 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 06:11:54 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int	ft_numlen(int n);

int	ft_print_nbr(int n)
{
	int	len;

	if (n == 0)
		return (ft_print_char('0'));
	len = ft_numlen(n);
	if (n < 0)
	{
		ft_print_char('-');
		if (n <= -10)
		{
			ft_print_nbr(n / -10);
			n %= -10;
		}
		if (n > -10)
			n *= -1;
	}
	if (n >= 10)
		ft_print_nbr(n / 10);
	n %= 10;
	ft_print_char(n + '0');
	return (len);
}

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}
