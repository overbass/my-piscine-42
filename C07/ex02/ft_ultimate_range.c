/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 19:04:32 by aajax             #+#    #+#             */
/*   Updated: 2019/08/20 22:47:13 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int	*size;
	int	a;

	a = 0;
	if (min > max || min == max)
		return (0);
	if (!(size = malloc(sizeof(*size) * (max - min))))
		return (0);
	size[a] = min;
	while (min < max)
	{
		size[a] = min;
		a++;
		min++;
	}
	*range = size;
	return (a);
}
