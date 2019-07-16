/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 20:48:41 by dlee              #+#    #+#             */
/*   Updated: 2019/07/15 21:22:38 by dlee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char	*dest, char	*src);

char *strcpy(char *dest, const char *src)
{

int main ()
{
	char *src[40];
	char *dest[100];

	memset(dest, '\0', size of(dest));
	strcpy(*src, "This is Doug's version of code.");
	strcpy(*dest,* src);

	printf("Final copied string : %s\n", *dest);

	return(0);
}
}
