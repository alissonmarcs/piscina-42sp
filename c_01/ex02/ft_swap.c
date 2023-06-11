/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 15:51:35 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/07 08:59:30 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 4;
	printf("a and b values before: %d, %d\n", a, b);
	ft_swap(&a, &b);
	printf("a and b values after: %d, %d\n", a, b);
}
*/
