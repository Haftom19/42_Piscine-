/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 21:55:11 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/28 21:55:11 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}
int main()
{
	int	n;
	int	*nbr8;
	int	**nbr7;
	int	***nbr6;
	int	****nbr5;
	int	*****nbr4;
	int	******nbr3;
	int	*******nbr2;
	int	********nbr1;
	int	*********nbr;

     n=10;
	nbr8=&n;
	nbr7=&nbr8;
	nbr6=&nbr7;
	nbr5=&nbr6;
	nbr4=&nbr5;
	nbr3=&nbr4;
	nbr2=&nbr3;
	nbr1=&nbr2;
	nbr=&nbr1;

ft_ultimate_ft(nbr);
	ft_putchar(n);
//	write (1, &number,1);
	//printf("%d",n);
	return(0);
}

