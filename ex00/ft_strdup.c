/* ************************************************************************** */
/*
                */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rado andria   <adresse@ecole.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/29 12:11:30 by rado andria       #+#    #+#             */
/*   Updated: 2023/09/29 12:11:30 by rado andria      ###   ########.fr       */
/*
                */
/* ************************************************************************** */
#include "ft_strdup.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	nb;

	nb = 0;
	while (*str != '\0')
	{
		nb++;
		str++;
	}
	return (nb);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*temp;

	dup = (char *)malloc(ft_strlen(src) + 1);
	temp = dup;
	if (dup == NULL)
	{
		return (NULL);
	}
	while (*src != '\0')
	{
		*dup = *src;
		dup++;
		src++;
	}
	*dup = '\0';
	return (temp);
}
