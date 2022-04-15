/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:56:28 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/31 00:56:28 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;	
	int	temp;
	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab [i] = tab [size - i - 1];
		tab [size - i - 1] = temp;
		i++;
	}
}

int	main()
{
	int tab[8] = {6, 2, 8, 4, 5, 9,7,3};
	int size = 8;

	ft_rev_int_tab(tab, size);
	printf("%d, %d, %d, %d, %d, %d,%d,%d", tab[0], tab[1], tab[2], tab[3], tab[4], tab[5],tab[6],tab[7]); 
	return (0);
}	