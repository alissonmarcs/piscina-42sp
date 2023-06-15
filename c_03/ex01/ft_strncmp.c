/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 13:06:15 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/15 11:44:29 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	count;

	count = 0;
	if (n != 0)
	{
		while (s1[count] && (s1[count] == s2[count]) && count < n - 1)
		{
			count++;
		}
		return (s1[count] - s2[count]);
	}
	return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%i\n", strncmp("al3sson", "alisson", 3));
// 	printf("%i\n", ft_strncmp("al3sson", "alisson", 3));
// }
