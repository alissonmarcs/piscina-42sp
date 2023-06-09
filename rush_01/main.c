/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dande-je <dande-je@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 16:20:46 by gmendonc          #+#    #+#             */
/*   Updated: 2023/06/04 20:36:41 by dande-je         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		main(int argc, char *argv[]);
int		ft_str_len(char *str);
void	ft_print_number(int num);
void	ft_message_error(void);
void	ft_print_str(char c, int i_end);
char	ft_input_is_valide(char *input);
void	ft_print_grid(int grid[4][4]);
void	ft_fill_grid_input(char *input, int grid[4][4]);
char	ft_check_char(char txt, char txt2);
void	ft_putchar(char c);

int	main(int argc, char **argv)
{
	int	grid[4][4];

	if (argc != 2)
	{
		ft_message_error();
		return (1);
	}
	else if (ft_input_is_valide(argv[1]) == 'F')
	{
		ft_message_error();
		return (1);
	}
	else
	{
		ft_fill_grid_input(argv[1], grid);
		ft_print_grid(grid);
	}
	return (0);
}

char	ft_input_is_valide(char *input)
{
	int	i;

	i = 0;
	if (ft_str_len(input) != 31)
	{
		return ('F');
	}
	else
	{
		while (input[i] != '\0')
		{
			if (ft_check_char(input[i], input[i + 1]) == 'T')
				i++;
			else
			{
				i = 0;
				break;
			}
		}
	}
	if (i == 0)
		return ('F');
	else
		return ('T');
}

void	ft_print_grid(int grid[4][4])
{
	int	col;
	int	line;
	int	item;

	col = 0;
	while (col < 4)
	{
		line = 0;
		while (line < 4)
		{
			item = grid[col][line];
			ft_print_str(item, 1);
			ft_print_str(' ', 1);
			line++;
		}
		ft_print_str('\n', 1);
		col++;
	}
}

void	ft_fill_grid_input(char *input, int grid[4][4])
{
	int	col;
	int	line;
	int	iterator_input;

	iterator_input = 0;
	col = 0;
	while (col < 4)
	{
		line = 0;
		while (line < 4)
		{
			if (input[iterator_input] == ' ')
				iterator_input++;
			grid[col][line] = input[iterator_input++];
			line++;
		}
		col++;
	}
}
