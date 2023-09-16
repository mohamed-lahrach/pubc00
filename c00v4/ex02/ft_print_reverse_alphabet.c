/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlahrach <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 16:53:30 by mlahrach          #+#    #+#             */
/*   Updated: 2023/09/13 17:04:22 by mlahrach         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	last_char;

	last_char = 'z';
	while (last_char >= 'a')
	{
		write(1, &last_char, 1);
		last_char--;
	}
}
