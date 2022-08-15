/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iryoga <iryoga@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 06:05:22 by iryoga            #+#    #+#             */
/*   Updated: 2022/08/16 03:50:04 by iryoga           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# include <stdio.h>
# include <limits.h>

typedef struct s_flags
{
	int	flag[2];
	int	field;
	int	acc;
	int	specifier;
	int	putnum;
	int	putlen;
	int copy_acc;
}				t_flags;


int		ft_printf(const char *fmt, ...);

#endif
