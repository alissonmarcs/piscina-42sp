/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: almarcos <almarcos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 16:39:56 by almarcos          #+#    #+#             */
/*   Updated: 2023/06/11 09:12:00 by almarcos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* #include <stdio.h> */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

char	*ft_c_upcase(char *c)
{
	if (*c >= 'a' && *c <= 'z')
		*c -= 32;
	return (c);
}

int	ft_c_is_alpha(char *c)
{
	return ((*c >= 'a' && *c <= 'z') || (*c >= 'A' && *c <= 'Z'));
}

int	ft_c_is_symbol(char *c)
{
	return ((*c >= 33 && *c <= 47) || (*c >= 58 && *c <= 64) || (*c >= 91
			&& *c <= 96) || (*c >= 123 && *c <= 126));
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	ft_strlowcase(str);
	if (ft_c_is_alpha(&str[i]))
		ft_c_upcase(&str[i]);
	while (str[i] != '\0')
	{
		if (str[i] == ' ' && ft_c_is_alpha(&str[i + 1]))
			ft_c_upcase(&str[i + 1]);
		else if (ft_c_is_symbol(&str[i]) && ft_c_is_alpha(&str[i + 1]))
			ft_c_upcase(&str[i + 1]);
		i++;
	}
	return (str);
}

/* int main()
{
	char	tmp[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(tmp);
	printf("%s\n", tmp);
}
 */
