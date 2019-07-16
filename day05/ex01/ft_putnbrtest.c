/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrtest.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 16:13:40 by dlee              #+#    #+#             */
/*   Updated: 2019/07/15 16:21:03 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbrtest(int nbr);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	int	nbr;

	nbr = 4;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = -12345;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = -1;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = 0;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = +1;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = 1;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = 23;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = -2147483648;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	nbr = 2147483647;
	ft_putnbrtest(nbr);
	ft_putchar('\n');
	return (0);
}
