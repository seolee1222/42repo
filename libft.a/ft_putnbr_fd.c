/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:45:25 by seolee            #+#    #+#             */
/*   Updated: 2024/10/11 13:18:46 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	a;

	a = '0';
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
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
}
