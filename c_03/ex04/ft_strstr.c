/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 18:18:16 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/13 16:42:12 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_equal(char *str1, char *str2)
{
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (0);
		str1++;
		str2++;
	}
	return (*str2 == '\0');
}

char	*ft_strstr(char *str, char *to_find)
{
	while (*str != '\0')
	{
		if ((*str == *to_find) && ft_str_is_equal(str, to_find))
			return (str);
		str++;
	}
	return (0);
}

// #include <string.h>
// #include <stdio.h>

// int main()
// {
// 	char test[] = "adao neponuceno de osuza";
// 	char *result;

// 	result = ft_strstr(test, "neponuceno");
// 	printf("%s\n", result);

// }
