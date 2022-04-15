/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 12:55:49 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/08 13:30:11 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str [i] != 0)
	{
		i++;
	}
	return (i);
}

char	*rev_print(char *str)
{
	int	length;

	length = ft_strlen(str);
	length--;
	while (length >= 0)
	{
		write (1, &str[length], 1);
		length--;
	}
	return (str);
}
/*int main(void)
{
	//char str [] = "HAFTOM";
	printf("%s",rev_print("HAFTOM"));
	
}*/
