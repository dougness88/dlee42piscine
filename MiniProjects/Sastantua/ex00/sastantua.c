/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/14 19:36:37 by dlee              #+#    #+#             */
/*   Updated: 2019/07/14 20:19:09 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		lengthfloor_i(int i)
{
	if (i == 0)
		return (7);
	return (lengthfloor_i(i - 1) + 2 * (1 + (3 + i) + ((i % 2) + (i / 2))));
}

void	etage(int height, int length, int shift)
{
	int i;
	int j;
	int lengthtotal;

	i = 0;
	while (i < height)
	{
		j = -shift;
		while (j < height - 1 - i)
		{
			write(1, " ", 1);
			j++;
		}
		j += height + 1 - i;
		write(1, "/", 1);
		while (j < length)
		{
			write(1, "*", 1);
			j++;
		}
		write(1, "\\", 1);
		write(1, "\n", 1);
		i++;
	}
}

void	sastantua(int size)
{
	int i;
	int height;
	int length;
	int shift;

	i = 0;
	while (i < size)
	{
		shift = (lengthfloor_i(size - 1) - lengthfloor_i(i)) / 2;
		height = 3 + i;
		length = lengthfloor_i(i);
		etage(height, length, shift);
		i++;
	}
}

int		main(int argc, char **argv)
{
	sastantua(3);
	return (0);
}
