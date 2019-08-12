/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 19:39:24 by aajax             #+#    #+#             */
/*   Updated: 2019/08/06 19:23:14 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int n, int p)
{
	char a;
	char b;
	char c;
	char d;

	a = '0' + n / 10;
	b = '0' + n % 10;
	c = '0' + p / 10;
	d = '0' + p % 10;
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (n != 98 || p != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int n;
	int p;

	n = 0;
	p = 1;
	while (n <= 99)
	{
		while (p <= 99)
		{
			print(n, p);
			p++;
		}
		n++;
		p = n + 1;
	}
}
