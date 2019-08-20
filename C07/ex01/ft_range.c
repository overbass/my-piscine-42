/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 04:32:11 by aajax             #+#    #+#             */
/*   Updated: 2019/08/20 16:25:15 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*size;
	int	i;

	i = 0;
	if (min >= max)
		return (0);
	if (!(size = malloc(sizeof(*size) * (max - min))))
		return (0);
	size[i] = min;
	while (max - min - 1 != 0)
	{
		i++;
		size[i] = min + 1;
		min++;
	}
	return (size);
}
