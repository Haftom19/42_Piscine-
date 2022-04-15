/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   : ft_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 23:07:22 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/30 23:07:22 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include<stdio.h>
#include <string.h>
int	ft_strlen(char *str)
{
	int i;
	i=0;
	while (str[i]!='\0')
	{
		i++;
		return(i);
	}
}

int main()
{
 char *str = "Haftom";

  
   printf("Length of string is: %d",  ft_strlen(str));
  
 return 0;
}
