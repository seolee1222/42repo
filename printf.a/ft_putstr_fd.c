/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 20:32:15 by seolee            #+#    #+#             */
/*   Updated: 2024/10/31 17:32:36 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;
	int	count;

	i = 0;
	if (s == NULL)
	{
		write(fd, "(null)", 6);
		count = 6;
		return (count);
	}
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	return (i);
}
