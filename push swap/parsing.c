/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/18 17:27:01 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 17:33:47 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int parsing(int argc, char **argv, t_stack *a)
{
    int i;
    int j;
    long num;
    int num_cnt;
    char **arg_value;

    i = 1;
    while (argv[i])
    {
        split(argv[i], " ");
        i++;
    }
    j = 1;
    i = 0;
    num_cnt = (word_count(argv));
    // arg_value =(split(argv," "));
    if (num_cnt < 2)
        return (0);
    while (j < num_cnt)
    {
        i = 0;
        if (arg_value[j][i] == '-' || arg_value[j][i] == '+')
            i++;
        if (!arg_value[j][i])
            return (free_args(arg_value), 0);
        while (arg_value[j][i])
        {
            if (arg_value[j][i] != ft_isdigit(arg_value[j][i]))
            {
                free_args(arg_value);
                return(0);
            }
            i++;
        }
        num = ft_atoi(arg_value[j]);
        if(num < -2147483648 || num >2147483647)
            return(free_args(arg_value),0);
        push(a, num);
        j++;
    }
    free_args(arg_value);
    check_rank(a);
    return(1);
}


int check_rank(t_stack *a)
{
    t_node *node;
    t_node *temp;

    node = a -> head;
    while (node)
    {
        temp = a->head;
        while (temp)
        {
            if (node->data > temp->data)
            {
                node->rank++;
            }
            temp = temp->next;
        }
        node = node->next;
    }
    return (1);
}

void check_dup(t_stack *a,int num)
{
    t_node *node;
    
    node = a->head;
    while (node)
    {
        if(node->data == num)
        {
            freestack(a);
            exit(1);
        }    
    }
}
void free_args(char **args)
{
    int i = 0;

    while (args[i])
        free(args[i++]);
    free(args);
}
void freestack(t_stack *a)
{
    t_node *temp;

    while (a->head)
    {
        temp = a->head;
        a->head = a->head->next;
        free(temp);
    }
}