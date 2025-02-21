/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:25 by seolee            #+#    #+#             */
/*   Updated: 2024/11/01 16:18:35 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"printf.h"

int	nbrlen(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 9)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_putnbr_fd(int n, int fd)
{
	char	a;
	int		count;

	count = (nbrlen(n));
	a = '0';
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return (11);
	}
	if (0 > n)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (10 <= n)
	{
		ft_putnbr_fd(n / 10, fd);
		a = (n % 10) + '0';
		ft_putchar_fd (a, fd);
	}
	else
		ft_putchar_fd(('0' + n), fd);
	return (count);
}
