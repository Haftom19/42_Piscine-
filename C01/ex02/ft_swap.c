/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:30:02 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/28 23:30:02 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int	temp;
	int *a;
	int *b;
	int n,m;
	a=&n; b=&m; 
	n=5; m=6;
	ft_swap(a,b);
	printf("a=%d " " ",n);
	printf("b=%d " "",m);
}