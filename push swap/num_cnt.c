/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   num_cnt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 17:49:39 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 17:34:06 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	word_count(char **argv)
{
	size_t	i;
	size_t	j;
	size_t	count;

	count = 0;
	j = 0;
	i = 1;
	while (argv[i])
	{
		j = 0;
		while (argv[i][j])
		{
			if (argv[i][j] != ' ' && (argv[i][j + 1] == ' ' || argv[i][j + 1] == '\0'))
				count++;
			j++;
		}
		i++;
	}
	return (count);
}
