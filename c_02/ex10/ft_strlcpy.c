/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 09:34:55 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/11 13:42:20 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	length;
	unsigned int	index;

	length = 0;
	index = 0;
	while (src[length] != '\0')
		length++;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (length);
}

/* int main()
{
	char src[] = "adao neponuceno de souza";
	char	dest[13];

	ft_strlcpy(dest, src, 5);
	printf("%s\n", dest);
} */
