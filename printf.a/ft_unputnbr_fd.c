/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unputnbr_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 18:44:14 by seolee            #+#    #+#             */
/*   Updated: 2024/11/01 16:20:01 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_unnbrlen(unsigned int n)
{
	int	i;

	i = 1;
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_unputnbr_fd(unsigned int n, int fd)
{
	char	a;

	a = '0';
	if (n >= 10)
	{
		ft_unputnbr_fd(n / 10, fd);
		a = (n % 10) + '0';
		ft_putchar_fd (a, fd);
	}
	else
		ft_putchar_fd(('0' + n), fd);
	return (ft_unnbrlen(n));
}
