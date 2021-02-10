/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 15:15:32 by buthor            #+#    #+#             */
/*   Updated: 2020/08/26 00:08:51 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *goback;

	i = 0;
	goback = (int*)malloc(sizeof(int) * length);
	if (goback == NULL)
		return (NULL);
	while (length > i)
	{
		goback[i] = f(tab[i]);
		i++;
	}
	return (goback);
}
