/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 14:17:56 by almarcos          #+#    #+#             */
/*   Updated: 2023/05/28 17:20:56 by almarcos         ###   ########.fr       */
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
			if ((col != 1 && col != x) && (lin == 1 || lin == y))
				ft_putchar('-');
			else if ((lin != 1 && lin != y) && (col == 1 || col == x))
				ft_putchar('|');
			else if ((col == 1 || col == x) && (lin == 1 || lin == y))
				ft_putchar('o');
			else
				ft_putchar(' ');
			col++;
		}
		ft_putchar('\n');
		lin++;
	}
}
