/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/18 15:12:52 by aajax             #+#    #+#             */
/*   Updated: 2019/08/20 16:12:01 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char **str, int size, char *sep)
{
	int a;
	int b;
	int c;
	int length;

	a = 0;
	length = 0;
	while (a < size)
	{
		b = 0;
		c = 0;
		while (str[a][b])
		{
			b++;
			length++;
		}
		while (sep[c] && a != size - 1)
		{
			c++;
			length++;
		}
		a++;
	}
	return (length);
}

char	*ft_strcat(char *dest, char **strs, char *sep, int size)
{
	int i;
	int j;
	int k;
	int l;

	i = 0;
	l = 0;
	while (i < size)
	{
		j = -1;
		k = -1;
		while (strs[i][++j])
		{
			dest[l] = strs[i][j];
			l++;
		}
		while (sep[++k] && i < size - 1)
		{
			dest[l] = sep[k];
			l++;
		}
		i++;
	}
	dest[l] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		i;

	i = 0;
	dest = malloc(sizeof(char) * (ft_strlen(strs, size, sep)) + 1);
	if (size == 0)
		return (dest);
	ft_strcat(dest, strs, sep, size);
	return (dest);
}
