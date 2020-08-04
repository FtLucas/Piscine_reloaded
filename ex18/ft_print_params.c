/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luwargni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/06 06:21:00 by luwargni          #+#    #+#             */
/*   Updated: 2018/11/06 06:36:00 by luwargni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	int		i;

	i = 1;
	while (i <= ac - 1)
	{
		ft_putstr(av[i++]);
		ft_putchar('\n');
	}
	return (0);
}
