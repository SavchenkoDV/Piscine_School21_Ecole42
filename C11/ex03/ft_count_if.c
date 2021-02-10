/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: buthor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/25 18:09:05 by buthor            #+#    #+#             */
/*   Updated: 2020/08/25 19:00:13 by buthor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_count_if(char **tab, int length, int (*f)(char*))
{
	int rez;
	int i;
	int goback;

	i = 0;
	goback = 0;
	while (length > i)
	{
		rez = f(tab[i]);
		if (rez != 0)
			goback++;
		i++;
	}
	return (goback);
}
