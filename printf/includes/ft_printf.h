/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 10:36:28 by katabram          #+#    #+#             */
/*   Updated: 2023/10/20 15:35:18 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF
# define FT_PRINTF

# include <string.h>
# include <stdarg.h>

typedef struct s_printf
{
	va_list	args;
	char	type;
	size_t	written;
} t_printf;

void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putstr(char *str);

# endif
