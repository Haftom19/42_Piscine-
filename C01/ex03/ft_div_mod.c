/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/28 23:37:44 by hsolomon          #+#    #+#             */
/*   Updated: 2022/03/28 23:37:44 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
*div = a / b;
*mod = a % b;
}
int main ()
{
	
	int div;
	int mod;
	int a;
	int b;
      a=5;
      b=2;
	
	printf("a %d b %d \n", a,b);

	ft_div_mod(a,b,&div,&mod);

	printf("a %d b %d div %d mod %d",a ,b,div,mod);

return (0);
}