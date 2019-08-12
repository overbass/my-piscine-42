/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 11:34:39 by kgarlick          #+#    #+#             */
/*   Updated: 2019/08/04 15:44:54 by kgarlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putline(char first, char second, char third, int x)
{
	if (x > 0)
	{
		ft_putchar(first);
		x--;
		while (x > 1)
		{
			ft_putchar(second);
			x--;
		}
		if (x != 0)
		{
			ft_putchar(third);
		}
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (x && y > 0)
	{
		ft_putline('A', 'B', 'A', x);
		y--;
		while (y > 1)
		{
			ft_putline('B', ' ', 'B', x);
			y--;
		}
		if (y != 0)
		{
			ft_putline('C', 'B', 'C', x);
		}
	}
}
