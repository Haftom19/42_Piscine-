/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 00:36:09 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/08 00:36:09 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;

	i = 0;
	if (*to_find == '\0')
	{
		return (str);
	}
	while (*str != *to_find)
	{
		str++;
	}
	while (*str == *to_find)
	{
		str++;
		to_find++;
		i++;
	}
	if (*to_find == '\0')
	{
		return (str - i);
	}
	else
	{
		return (NULL);
	}
}

/* int    main()
{
    char *str = "aluminium";
    char *to_find = "min";
    char *ptr = ft_strstr(str, to_find);
    printf("%s\n", ptr);
    return(0);
} */
