/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:52:46 by seolee            #+#    #+#             */
/*   Updated: 2025/02/20 20:09:45 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include<stdlib.h>
typedef struct s_node
{
    struct s_node *prev;
    int data;
    int rank;
    struct s_node *next;
} t_node;
typedef struct s_stack
{
    t_node *head;
    int len;
    t_node *tail;
} t_stack;
t_node	*addnode(int data);
long	ft_atoi(const char *str);
size_t	word_count(char **argv);
void sa(t_stack *a);
void sb(t_stack *b);
void pb (t_stack *b, int data);
void pa (t_stack *a, int data);
int parsing(int argc, char **argv, t_stack *a);
int check_rank(t_stack *a);
void check_dup(t_stack *a,int num);
void free_args(char **args);
void freestack(t_stack *a);
int push_swap(int argc,char **argv);
void push (t_stack *a, int data);
void    swap(t_stack *a);
void reverse(t_stack *a);
void rrotate(t_stack *a);
void radixsort(t_stack *a, t_stack *b);
void ra(t_stack a);
void rb(t_stack *b);
char	**subsplit(char **split, char const *s, char c);
char	**splfree(char **split);
char	**ft_split(char const *s, char c);
size_t	wc(char const *s, char c);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlen(const char *str);
char	*ft_strdup(const char *s);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);

#endif