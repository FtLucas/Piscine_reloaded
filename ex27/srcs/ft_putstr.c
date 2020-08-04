/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 08:37:59 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/08 02:11:50 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_headers.h"

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}
