/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgarlick <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/03 14:36:42 by kgarlick          #+#    #+#             */
/*   Updated: 2019/08/04 16:48:13 by kgarlick         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_firstlast(int x)
{
	if (x > 0)
	{
		ft_putchar('o');
		x--;
		while (x > 1)
		{
			ft_putchar('-');
			x--;
		}
		if (x > 0)
		{
			ft_putchar('o');
		}
	}
}

void	ft_middle(int x)
{
	if (x > 0)
	{
		ft_putchar('|');
		x--;
		while (x > 1)
		{
			ft_putchar(' ');
			x--;
		}
		if (x > 0)
		{
			ft_putchar('|');
		}
	}
}

void	rush(int x, int y)
{
	if (y > 0 && x > 0)
	{
		ft_firstlast(x);
		y--;
		ft_putchar('\n');
		while (y > 1)
		{
			ft_middle(x);
			y--;
			ft_putchar('\n');
		}
		if (y > 0)
		{
			ft_firstlast(x);
			{
				ft_putchar('\n');
			}
		}
	}
}
