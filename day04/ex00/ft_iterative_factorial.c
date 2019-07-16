/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_interative_factorial.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/13 15:16:51 by dlee              #+#    #+#             */
/*   Updated: 2019/07/14 15:53:29 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int sum;

	sum = 1;
	if (nb >= 1)
	{
		while (nb >= 1)
		{
			sum = nb * sum;
			nb--;
		}
	}
	else 
		if (nb == 0)
			return (1);
	
	return (0);
}

int		main()
{
	int sum;
	sum = ft_iterative_factorial(5);
	printf("%d\n", sum);
	return (0);
}
