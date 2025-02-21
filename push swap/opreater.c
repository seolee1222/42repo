/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   opreater.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 20:07:34 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 17:33:51 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sa(t_stack *a)
{
    swap(a);
    ft_printf("%s", sa); 
} 
void sb(t_stack *b)
{
    swap(b);
    ft_printf("%s", sb);
}
void pb (t_stack *b, int data)
{
    push(b, data);
    ft_printf("%s", pb);
}
void pa (t_stack *a, int data)
{
    push(a, data);
    ft_printf("%s", pa);
}
