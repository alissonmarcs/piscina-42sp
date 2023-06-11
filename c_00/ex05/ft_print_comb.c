/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/30 15:58:23 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/07 07:49:08 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	if (a != '7' || b != '8' || c != '9')
		write(1, ", ", 2);
	else
		write(1, "\n", 1);
}

void	ft_print_comb(void)
{
	char	left_digit;
	char	mid_digit;
	char	right_digit;

	left_digit = '0';
	while (left_digit <= '7')
	{
		mid_digit = left_digit + 1;
		while (mid_digit <= '8')
		{
			right_digit = mid_digit + 1;
			while (right_digit <= '9')
			{
				ft_print(left_digit, mid_digit, right_digit);
				right_digit++;
			}
			mid_digit++;
		}
		left_digit++;
	}
}
