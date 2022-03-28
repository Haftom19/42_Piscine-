/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/27 15:59:11 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/27 15:59:11 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h> 

void	ft_putchar(char c);

void	print_abc(int i, int j, int x, int y)
{
	if ((i == 1 && j == 1) || ((i == x && j == y) && (i != 1 && j != 1)))
		ft_putchar('A');
	else if ((i == 1 && j == y) || (i == x && j == 1))
		ft_putchar('C');
	else if ((i == 1 && j != y && j != 1) || (j == 1 && i != x && i != 1))
		ft_putchar('B');
	else if ((i == x && j != 1 && j != y) || (j == y && i != 1 && i != x))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	print(int x, int y)
{
	int	i;
	int	j;

	i = 1;
	while (i <= x)
	{
		j = 1;
		while (j <= y)
		{
			print_abc(i, j, x, y);
		j++;
		}
		ft_putchar('\n');
	i++;
	}
}

void	rush(int x, int y)
{
	print(y, x);
}
