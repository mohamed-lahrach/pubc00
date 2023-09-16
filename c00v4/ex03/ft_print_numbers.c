/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 17:24:11 by mlahrach          #+#    #+#             */
/*   Updated: 2023/09/13 17:24:30 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	start_num;

	start_num = '0';
	while (start_num <= '9')
	{
		write(1, &start_num, 1);
		start_num++;
	}
}
