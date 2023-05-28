/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/28 10:20:31 by almarcos          #+#    #+#             */
/*   Updated: 2023/05/28 17:23:29 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	rush(int x, int y)
{
	int	col;
	int	lin;

	lin = 1;
	while (lin <= y && x > 0)
	{
		col = 1;
		while (col <= x)
		{
			if ((col == 1 && lin == 1) || (col == x && lin == 1))
				ft_putchar('A');
			else if ((col == 1 && lin == y) || (col == x && lin == y))
				ft_putchar('C');
			else if ((col == 1) || (col == x) || (lin == 1) || (lin == y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
