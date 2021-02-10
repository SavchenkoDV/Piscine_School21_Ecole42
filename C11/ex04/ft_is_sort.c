/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 22:36:24 by buthor            #+#    #+#             */
/*   Updated: 2020/08/26 00:04:28 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length <= 2)
		return (1);
	while ((f(tab[i], tab[i + 1])) <= 0)
	{
		i++;
		if (length - 1 == i)
			return (1);
	}
	i = 0;
	while ((f(tab[i], tab[i + 1])) >= 0)
	{
		i++;
		if (length - 1 == i)
			return (1);
	}
	return (0);
}
