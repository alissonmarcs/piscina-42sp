/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/07 23:07:17 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/08 00:40:24 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_index;

	i = 0;
	while (i < size - 1)
	{
		min_index = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_index])
				min_index = j;
			j++;
		}
		ft_swap(&tab[min_index], &tab[i]);
		i++;
	}
}

/*
void	ft_put_arr(int *tab, int size)
{
	for (int i = 0; i < size; i++)
		printf("%d, ", tab[i]);
}

int	main(void)
{
	int	tmp[3];

	tmp[3] = {32, 22, 4};
	ft_sort_int_tab(tmp, 3);
	ft_put_arr(tmp, 3);
}
*/
