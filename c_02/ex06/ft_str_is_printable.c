/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:03:53 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/09 16:13:42 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

/* int main()
{
	char tmp[10] = "alisson";
	printf("%d\n", ft_str_is_printable(tmp));

	tmp[4] = 11;
	printf("%d\n", ft_str_is_printable(tmp));
} */
