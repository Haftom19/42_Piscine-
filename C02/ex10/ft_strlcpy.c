/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 16:37:26 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/06 16:37:26 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && (i < size - 1))
	{
			dest[i] = src[i];
			i++;
	}
		dest[i] = '\0';
	return (i);
}

/*int	main(void)
{
	char	src[] = "haftom!";
	char	dest[] = "haf";
	printf("%d \n", ft_strlcpy(dest, src, 4));
	printf("%s\n",dest);
}*/
