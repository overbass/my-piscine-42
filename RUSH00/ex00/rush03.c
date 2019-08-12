/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:47:39 by aajax             #+#    #+#             */
/*   Updated: 2019/08/04 15:57:10 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	input_line(char firstcharacter, char mid, char end, int width)
{
	if (width > 0)
	{
		if (width > 0)
			ft_putchar(firstcharacter);
		width--;
		while (width > 1)
		{
			ft_putchar(mid);
			width--;
		}
		if (width > 0)
			ft_putchar(end);
		ft_putchar('\n');
	}
}

void	rush(int x, int y)
{
	if (y > 0)
		input_line('A', 'B', 'C', x);
	y--;
	while (y > 1)
	{
		input_line('B', ' ', 'B', x);
		y--;
	}
	if (y > 0)
		input_line('A', 'B', 'C', x);
}
