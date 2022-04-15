/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 09:43:07 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/31 09:43:07 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
void ft_sort_int_tab(int *tab, int size)
{
	int i;
	int j;
	int temp;
	i=0;
	while (i < size-1 )
	{
		j=0;
		while (j < size-1 )
		{
			if(tab[j] > tab[j+1])
			{
				temp=tab[j];
				tab[j]=tab[j+1];
				tab[j+1]=temp;
			}
			j++;
		}
		i++;
	}
}
int	main()
{
	int tab[8] = {0, 2, 1, 4, 8, 5,3,9};
	int size = 8;

	ft_sort_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],tab[6],tab[7]); 
	return (0);
}	