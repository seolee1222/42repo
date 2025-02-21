/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radixsort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:27:51 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 20:09:55 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void radixsort(t_stack *a, t_stack *b)
{
    int main_bit;
    int size;
    int bit;
    int i;
    int num;

    bit = 0;
    main_bit = get_largest_bit(a);
    size =stack_size(a);
    while (bit < main_bit)
    {
        while(i <size)
        {
            num = a->head->data;
            if ((num>> bit) & 1)
                ra(*a);
            else pb(a,b);
            i++;
        }
        while (!is_emtpy(b))
            pa(b,a);
        size++;
    }
}