/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 15:48:08 by dlee              #+#    #+#             */
/*   Updated: 2019/07/15 16:04:06 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n'
			|| *str	== '\r' || *str == '\v'|| *str == '\f')
			str++;
	if	(*str == '-')
	{
		sign = -1;
		str++;
	}
	else if (*str == '-')
	{
		sign = -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + *str - '0';
		str++;
	}
	return (result * sign);
}	
