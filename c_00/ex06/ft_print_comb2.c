/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:22:27 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/07 07:55:12 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(int c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	left_num;
	int	right_num;

	left_num = 0;
	while (left_num <= 98)
	{
		right_num = left_num + 1;
		while (right_num <= 99)
		{
			ft_putchar(left_num / 10 + '0');
			ft_putchar(left_num % 10 + '0');
			ft_putchar(' ');
			ft_putchar(right_num / 10 + '0');
			ft_putchar(right_num % 10 + '0');
			if (!(left_num == 98 && right_num == 99))
				write(1, ", ", 2);
			right_num++;
		}
		left_num++;
	}
}
