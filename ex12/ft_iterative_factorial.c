/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 01:50:02 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/06 01:59:03 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (result);
	while (nb != 0)
		result = result * nb--;
	return (result);
}
