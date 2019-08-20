/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/17 04:29:29 by aajax             #+#    #+#             */
/*   Updated: 2019/08/19 13:29:43 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (*str != '\0')
	{
		str++;
		a++;
	}
	return (a);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;

	dest = malloc(sizeof(char) * (ft_strlen(src) + 1));
	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}
