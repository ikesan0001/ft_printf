/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:27 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 04:14:13 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_printstr(char *s)
{
	int	len;

	if (s == NULL)
		ft_printstr("(null)");
	while (s[len] != '\0')
		len++;
	write(1, s, len);
	return (len);
}
