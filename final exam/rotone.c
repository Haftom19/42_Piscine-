/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 16:17:22 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/08 17:10:11 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc != 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		if (argv[1][i] == 'z')
			argv[1][i] = 'a';
		else if (argv[1][i] == 'Z')
			argv[1][i] = 'A';
		else if (argv[1][i] >= 'A' && argv[1][i] <= 'z')
			argv[1][i] += 1;
		write (1, &argv[1][i], 1);
			i++;
	}
	write (1, "\n", 1);
	return (0);
}
