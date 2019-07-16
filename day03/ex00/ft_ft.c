/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:24:17 by dlee              #+#    #+#             */
/*   Updated: 2019/07/12 23:11:22 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

void ft_ft(int *nbr);
{
	*nbr = 42;
}

int	main(void)
{
	int	a;
	int	*ptr;

	a = 42;
	ptr = &a;
	return (0);
}
