/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 15:04:43 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/12 10:49:59 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((*s1 == *s2) && (*s1 != '\0' && *s2 != '\0'))
	{
		s1++;
		s2++;
	}
	if (*s1 == *s2)
		return (0);
	else if (*s1 > *s2)
		return (1);
	else
		return (-1);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
// 	printf("%d\n", ft_strcmp("carla", "carlaa"));
// 	printf("%d\n", strcmp("carla", "carlaa"));
// }
