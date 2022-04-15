/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 00:54:04 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/07 00:54:04 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*int	main()
{
	printf("%d", ft_strcmp("Haftom", "Haftom"));
	printf("\n%d", ft_strcmp("Haftom", "Ha"));
	printf("\n%d", ft_strcmp("Ha", "Haftom"));
	printf("\n%d", ft_strcmp("Haftom", "haftom"));
}*/