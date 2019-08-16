/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 14:07:00 by aajax             #+#    #+#             */
/*   Updated: 2019/08/15 17:10:03 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power > 1)
		return (nb * ft_recursive_power(nb, power - 1));
	if (power < 0)
		return (0);
	return (0);
}
