/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/14 17:17:07 by aajax             #+#    #+#             */
/*   Updated: 2019/08/14 22:16:48 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int a;

	a = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb && nb != 0)
		a = a * nb;
	return (a);
}