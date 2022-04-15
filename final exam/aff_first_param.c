/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsolomon <hsolomon@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 15:41:11 by hsolomon          #+#    #+#             */
/*   Updated: 2022/04/08 16:12:35 by hsolomon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

		i = 0;
	if (argc < 2)
	{
		write (1, "\n", 1);
		return (0);
	}
	while (argv[1][i])
	{
		write (1, &argv[1][i], 1);
		i++;
	}
	write (1, "\n", 1);
	return (0);
}
