/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aajax <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/21 15:55:31 by aajax             #+#    #+#             */
/*   Updated: 2019/08/21 17:29:04 by aajax            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int		main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	t_stock_str *par;
	par = ft_strs_to_tab(argc,argv);
	ft_show_tab(par);
}
