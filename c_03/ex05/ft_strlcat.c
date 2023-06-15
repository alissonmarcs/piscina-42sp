/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/13 08:24:19 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/15 11:46:51 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	dest_length;
	unsigned int	src_length;
	unsigned int	i;

	i = 0;
	dest_length = ft_strlen(dest);
	src_length = ft_strlen(src);
	while (src[i] != '\0' && (dest_length + i + 1) < size)
	{
		dest[dest_length + i] = src[i];
		i++;
	}
	dest[dest_length + i] = '\0';
	return (dest_length + src_length);
}

// #include <stdio.h>

// int main(void)
// {
//     char dest[15] = "alisson";
// 	unsigned int size;
//     size = ft_strlcat(dest, " e adão neponuceno de souza", sizeof(dest));
// 	printf("%s\n", dest);
//     printf("%i\n", size);
// }
