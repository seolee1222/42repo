/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:51:10 by seolee            #+#    #+#             */
/*   Updated: 2024/11/04 13:07:40 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	check(const char *form, va_list av, int *count)
{
	if (*form == 'c')
		*count += ft_putchar_fd((char) va_arg(av, int), 1);
	else if (*form == 's')
		*count += ft_putstr_fd(va_arg(av, char *), 1);
	else if (*form == 'p')
		*count += ft_ptrpr(va_arg(av, unsigned long long));
	else if (*form == 'd' || *form == 'i')
		*count += ft_putnbr_fd(va_arg(av, int), 1);
	else if (*form == 'u')
		*count += ft_unputnbr_fd(va_arg(av, unsigned int), 1);
	else if (*form == 'x' || *form == 'X')
		*count += ft_hexpr(va_arg(av, unsigned int), form);
	else if (*form == '%')
	{
		ft_putchar_fd('%', 1);
		(*count)++;
	}
	else
		return (-1);
	return (0);
}

int	ft_printf(const char *form, ...)
{
	va_list	av;
	int		count;

	count = 0;
	va_start(av, form);
	while (*form)
	{
		if (*form == '%')
		{
			form++;
			if (check(form, av, &count) == -1)
			{
				va_end(av);
				return (-1);
			}
		}
		else
		{
			ft_putchar_fd(*form, 1);
			count++;
		}
		form++;
	}
	va_end(av);
	return (count);
}
