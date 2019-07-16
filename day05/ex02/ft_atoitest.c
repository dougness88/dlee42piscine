/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:48:08 by dlee              #+#    #+#             */
/*   Updated: 2019/07/15 16:32:00 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int		ft_atoitest(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(void)
{
	char string[] = "		-12";

	printf("%d\n", ft_atoitest(string));
	return (0);
}	
