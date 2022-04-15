/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 10:10:52 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/04 22:30:19 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

int main()
{
	char src[] = "haftom!";
	char dest[] = "hel";
	//char dest1[] = "solomon1";

	printf("%s", ft_strncpy(dest, src, 8));
	//printf("\n%s", strncpy(dest1, src, 3));
	//printf("\n%s", ft_strncpy(dest, src, 5));
	//printf("\n%s", strncpy(dest1, src, 5));
	//printf("\n%s", ft_strncpy(dest, src, 7));
	//printf("\n%s", strncpy(dest1, src, 7));
}