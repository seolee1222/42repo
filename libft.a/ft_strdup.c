/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 17:21:23 by seolee            #+#    #+#             */
/*   Updated: 2024/10/15 20:10:33 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strdup(const char *s)
{
	char	*cp;
	int		i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
		i++;
	cp = malloc (i + 1);
	if (cp == NULL)
		return (NULL);
	ft_strlcpy(cp, s, i + 1);
	return (cp);
}
