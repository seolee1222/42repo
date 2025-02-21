/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 14:56:44 by seolee            #+#    #+#             */
/*   Updated: 2024/10/12 18:37:09 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char	*temp1;
	unsigned char	*temp2;

	temp1 = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	i = 0;
	while ((temp1[i] || temp2[i]) && i < n)
	{
		if (temp1[i] != temp2[i])
		{
			return (temp1[i] - temp2[i]);
		}
		i++;
	}
	if (i == n)
		return (0);
	return (temp1[i] - temp2[i]);
}
