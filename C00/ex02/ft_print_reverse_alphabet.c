/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/05 21:09:23 by aajax             #+#    #+#             */
/*   Updated: 2019/08/05 21:10:55 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	revalpha;

	revalpha = 'z';
	while (revalpha >= 'a')
	{
		write(1, &revalpha, 1);
		revalpha--;
	}
}
