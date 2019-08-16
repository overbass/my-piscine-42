/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/13 09:57:09 by aajax             #+#    #+#             */
/*   Updated: 2019/08/13 17:11:57 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i;
	unsigned int s_dest;

	i = 0;
	s_dest = 0;
	while (dest[s_dest] != '\0')
		s_dest++;
	while (src[i] != '\0' && i < nb)
	{
		dest[s_dest + i] = src[i];
		i++;
	}
	dest[s_dest + i] = '\0';
	return (dest);
}
