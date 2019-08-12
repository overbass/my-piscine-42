/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/08 20:04:05 by aajax             #+#    #+#             */
/*   Updated: 2019/08/11 01:17:09 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int n;
	int first;

	first = 1;
	n = 0;
	while (str[n] != '\0')
	{
		if ((str[n] <= 'z' && str[n] >= 'a') && (first == 1))
			str[n] = str[n] - 32;
		else if ((str[n] <= 'Z' && str[n] >= 'A') && (first == 0))
			str[n] = str[n] + 32;
		if ((str[n] <= 'z' && str[n] >= 'a') ||
				(str[n] <= 'Z' && str[n] >= 'A') ||
				(str[n] <= '9' && str[n] >= '0'))
			first = 0;
		else
			first = 1;
		n++;
	}
	return (str);
}
