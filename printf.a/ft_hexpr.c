/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexpr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 17:01:32 by seolee            #+#    #+#             */
/*   Updated: 2024/11/04 13:09:59 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	lenhex(unsigned int n)
{
	int	len;

	len = 1;
	while (n > 15)
	{
		n = n / 16;
		len++;
	}
	return (len);
}

int	lowhex(unsigned int n)
{
	int		i;
	char	*hex;
	char	*s;
	int		temp;

	i = lenhex(n);
	hex = "0123456789abcdef";
	s = malloc(i +1);
	if (!s)
		return (0);
	s[i] = '\0';
	while (n > 0)
	{
		s[--i] = hex[n % 16];
		n = n / 16;
	}
	temp = ft_putstr_fd(s, 1);
	free(s);
	return (temp);
}

int	uphex(unsigned int n)
{
	int		i;
	char	*hex;
	char	*s;
	int		temp;

	hex = "0123456789ABCDEF";
	i = lenhex(n);
	s = malloc(i +1);
	if (!s)
		return (0);
	s[i] = '\0';
	while (n > 0)
	{
		s[--i] = hex[n % 16];
		n = n / 16;
	}
	temp = ft_putstr_fd(s, 1);
	free(s);
	return (temp);
}

int	ft_hexpr(unsigned int n, const char *form)
{
	if (n == 0)
	{
		write (1, "0", 1);
		return (1);
	}
	if (*form == 'x')
		return (lowhex(n));
	else
		return (uphex(n));
}
