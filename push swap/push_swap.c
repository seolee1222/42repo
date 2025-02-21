/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/06 06:37:41 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 20:09:57 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "push_swap.h"

int push_swap(int argc,char **argv)
{
    t_stack a;
    t_stack b;

    if (argc <= 1)
        return(0);
    if (!parsing(argc,argv,&a))
    {
        ft_lstclear(&a);
        return(0);
    }
    return(1);
}

void push (t_stack *a, int data)
{
    t_node *new_node;

    new_node = addnode(data); //랭크를 전달할방법찾기
    if (!new_node)
        return;
    if (new_node)
    {
        new_node->next = a->head;
        if (a->head)
            a->head->prev = new_node;
        new_node->prev = a->tail;
        a->tail->next = new_node;
        a->head = new_node;
        a->len++;
    }
}

void    swap(t_stack *a)
{
    t_node  *origin_head;
    t_node  *temp;

    origin_head = a->head;
    temp = a->head->next;
    origin_head->next = temp->next;
    temp->next->prev = origin_head;
    origin_head->prev = temp;
    temp->prev = a->tail;
    temp->next = origin_head;
    a->tail->prev = temp;
    a->head = temp;
}

void reverse(t_stack *a)
{
    t_node *orign_head;

    orign_head = a->head;
    a->head = orign_head->next;
    a->tail = orign_head;
}
void rrotate(t_stack *a)
{
    t_node *origin_tail;

    origin_tail = a->tail;
    a->tail = origin_tail->prev;
    a->head= origin_tail;
}