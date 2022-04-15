/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 22:43:32 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/04 22:43:32 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 1;
	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
		
	while (str[i])
	{
    if ((str[i] >= ' ' && str[i] <= '/') || (str[i] >= ':' && str[i] <= '@'))
	{
		if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
		{
			str[i+1] -= 32;q
			
		
		}

	}
	i++;

	}
	return (str);

}

int	main()
{
	//char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char str[] = "7iujndfvon,odficj,dc ds~fovij?kl43lo+dd-sdk%cdj*dc$sdc";
	printf("%s", ft_strcapitalize(str));
	
}
