/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 20:44:02 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/28 20:44:02 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 2);
}

void	ft_ft(int *nbr)
{
	
	*nbr = 42;
}

int main()
{
	int number;
	int *nbr;
	nbr=&number;
	ft_ft(nbr);
	ft_putchar(number + '0');
//	write (1, &number,1);
	//printf("%d",number);
	return(0);
}