/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 16:36:39 by dlee              #+#    #+#             */
/*   Updated: 2019/07/12 16:42:02 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_ft(int *********nbr);

void	ft_putchar(char ptr);
void	ft_putnbr(int ptr);
void	ft_putaddr(void *ptr);

int	main(void)
{
	int		a;
	int		*ptr;
	int		**ptr;
	int		***ptr;
	int		****ptr;
	int		*****ptr;
	int		******ptr;
	int		*******ptr;
	int		********ptr;
	int		*********ptr;

	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	ft_putnbr(*********ptr9);
	return (0);
}
