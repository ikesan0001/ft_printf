/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:11:18 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 00:24:08 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	ft_check_types(va_list ap);

int	ft_printf(const char *fmt, ...)
{
	va_list	ap;
	int		length;
	int		i;

	length = 0;
	i = 0;
	if (fmt == NULL)
		return (-1);
	va_start(ap, fmt);
	while (fmt[i] != '\0' && length < INT_MAX)
	{
		if (fmt[i] == '%')
		{
			i++;
			length += ft_check_types();
		}
		length += ft_printchar();
		i++;
	}
	va_end(ap);
	return (length);
}
