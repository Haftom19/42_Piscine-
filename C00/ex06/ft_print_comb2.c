/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 21:17:06 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/23 21:17:06 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_put_comb2(char a, char b)
{
	ft_putchar(a / 10 + '0');
	ft_putchar(a % 10 + '0');
	ft_putchar(' ');
	ft_putchar(b / 10 + '0');
	ft_putchar(b % 10 + '0');
	if (a != 98 || b != 99)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}	
}

void	ft_print_comb2(void)
	{
	char	a;
	char	b;

		a = 0;
	while (a <= 98)
	{
	b = a + 1;
		while (b <= 99)
		{
			ft_put_comb2(a, b);
			b++;
		}
		a++;
	}
}
