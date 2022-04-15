/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 00:37:52 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/29 00:37:52 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_putstr(char *str)
{
	int	i;
	
	i = 0;
while (str[i])
{

	write (1, &str[i], 1);
		i++;
}
}
int main()
{
	ft_putstr("Haftom");
	return (0);
}
