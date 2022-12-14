/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:11:18 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 07:52:18 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

static int	ft_check_types(va_list ap, int specifier);

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
	while (fmt[i] != '\0')
	{
		if (fmt[i] == '%')
		{
			i++;
			length += ft_check_types(ap, (int)fmt[i]);
		}
		else
			length += ft_print_char((int)fmt[i]);
		i++;
	}
	va_end(ap);
	return (length);
}

static int	ft_check_types(va_list ap, int specifier)
{
	int	len;

	len = 0;
	if (specifier == 'c')
		len = ft_print_char(va_arg(ap, int));
	else if (specifier == 's')
		len = ft_print_str(va_arg(ap, char *));
	else if (specifier == 'p')
		len = ft_print_address((uintptr_t)va_arg(ap, void *));
	else if (specifier == 'd' || specifier == 'i')
		len = ft_print_nbr(va_arg(ap, int));
	else if (specifier == 'u')
		len = ft_print_unnbr(va_arg(ap, unsigned int));
	else if (specifier == 'x' || specifier == 'X')
		len = ft_print_hex(va_arg(ap, unsigned int), specifier);
	else if (specifier == '%')
		len = ft_print_char('%');
	return (len);
}

/*
int main(void)
{
	uintptr_t	p;
	p = -1;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = 1;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = 15;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = 16;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = LONG_MIN;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = LONG_MAX;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = ULONG_MAX;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));

	p = -ULONG_MAX;
	printf(" ft %d \n", ft_printf("%p", (void *)p));
	printf(" pr %d \n", printf("%p", (void *)p));


	return (0);
}
*/
