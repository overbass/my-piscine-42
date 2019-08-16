/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 17:10:45 by aajax             #+#    #+#             */
/*   Updated: 2019/08/15 18:23:59 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	int res;

	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	else
	{
		res = (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
		return (res);
	}
}
