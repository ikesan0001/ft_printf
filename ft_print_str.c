/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/17 23:49:27 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/18 05:07:51 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./includes/ft_printf.h"

int	ft_printstr(char *s)
{
	int	len;

	if (s == NULL)
		return (ft_printstr("(null)"));
	len = 0;
	while (s[len] != '\0')
		len++;
	write(1, s, len);
	return (len);
}
