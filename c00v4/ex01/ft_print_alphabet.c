/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:10:50 by mlahrach          #+#    #+#             */
/*   Updated: 2023/09/13 16:46:40 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	start_char;

	start_char = 'a';
	while (start_char <= 'z')
	{
		write(1, &start_char, 1);
		start_char++;
	}
}
