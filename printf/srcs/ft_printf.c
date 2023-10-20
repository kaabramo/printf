/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katabram <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 14:23:07 by katabram          #+#    #+#             */
/*   Updated: 2023/10/20 14:27:43 by katabram         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


void	init_printf(t_printf *printf)
{
	printf->args;
	printf->type = 0;
	printf->written = 0;
}

int	ft_printf(char const *s, ...)
{
	t_printf printf;

	init_printf(&printf);

}


