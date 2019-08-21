/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/20 18:49:20 by aajax             #+#    #+#             */
/*   Updated: 2019/08/21 15:23:35 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		a;
	int		i;

	i = ft_strlen(src);
	if (!(dest = malloc(sizeof(char) * (i + 1))))
		return (0);
	*dest = 0;
	a = 0;
	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';
	return (dest);
}

struct		s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			a;
	t_stock_str	*tab;

	if (!(tab = malloc(sizeof(t_stock_str) * (ac + 1))))
		return (0);
	a = 0;
	while (a < ac)
	{
		tab[a].str = av[a];
		tab[a].copy = ft_strdup(av[a]);
		tab[a].size = ft_strlen(av[a]);
		a++;
	}
	tab[a].str = 0;
	tab[a].copy = 0;
	tab[a].size = 0;
	return (tab);
}
