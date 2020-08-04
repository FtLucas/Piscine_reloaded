/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 22:57:13 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/07 22:43:46 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int		*tab;
	int		i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(tab = (int *)malloc(sizeof(int) * (max - min) + 1)))
		return (0);
	while (min < max)
	{
		tab[i] = min++;
		i++;
	}
	tab[i] = '\0';
	return (tab);
}
