/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 21:02:18 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/04 21:02:18 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (! (c >= 32 && c <= 126))
			return (0);
		i++;
	}
	return (1);
}

int	main(void)
{
	printf("%d", ft_str_is_printable("ABCDEFGlkhtyu458%"));
	printf("\n%d", ft_str_is_printable("\n\t\v\f"));
}
