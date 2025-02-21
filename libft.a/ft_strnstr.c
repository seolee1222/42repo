/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/03 16:14:23 by seolee            #+#    #+#             */
/*   Updated: 2024/10/11 15:19:26 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strnstr(const char *str, const char *substr, size_t len)
{
	size_t	substr_len;

	if (*substr == 0)
		return ((char *)str);
	substr_len = ft_strlen(substr);
	while (*str && len >= substr_len)
	{
		if (ft_memcmp(str, substr, substr_len) == 0)
			return ((char *)str);
		str++;
		len--;
	}
	return (NULL);
}
