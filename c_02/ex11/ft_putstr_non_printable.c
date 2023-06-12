/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:54:19 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/10 17:41:02 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex_value(char c)
{
	char	*base;
	char	first_part_hex;
	char	second_part_hex;

	base = "0123456789abcdef";
	first_part_hex = base[c / 16];
	second_part_hex = base[c % 16];
	ft_putchar('\\');
	ft_putchar(first_part_hex);
	ft_putchar(second_part_hex);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			print_hex_value(str[i]);
		else
			ft_putchar(str[i]);
		i++;
	}
}

/*
int	main(void)
{
	char tmp[] = "alisson";
	tmp[3] = 16;
	ft_putstr_non_printable(tmp);
}
*/
