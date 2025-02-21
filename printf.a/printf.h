/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seolee <seolee@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 19:47:11 by seolee            #+#    #+#             */
/*   Updated: 2024/10/29 19:50:45 by seolee           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include<unistd.h>
# include<stddef.h>
# include<stdlib.h>
# include<stdarg.h>

int	ft_unputnbr_fd(unsigned int n, int fd);
int	ft_putstr_fd(char *s, int fd);
int	ft_putnbr_fd(int n, int fd);
int	ft_putchar_fd(char c, int fd);
int	ft_ptrpr(unsigned long long n);
int	ft_printf(const char *form, ...);
int	ft_hexpr(unsigned int n, const char *form);

#endif
