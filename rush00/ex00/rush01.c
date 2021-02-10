/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbulwer <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/08/16 15:51:42 by kbulwer           #+#    #+#             */
/*   Updated: 2020/08/16 17:03:27 by kbulwer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_top(int x, int w)
{
	ft_putchar('/');
	while (x > w)
	{
		if (x > w + 1)
		{
			if (x > w + 2)
				ft_putchar('*');
			else
				ft_putchar('\\');
		}
		w++;
	}
	ft_putchar('\n');
}

void	ft_middle(int x, int y, int w, int h)
{
	while (y > h + 2)
	{
		ft_putchar('*');
		while (x > w)
		{
			if (x > w + 1)
			{
				if (x > w + 2)
					ft_putchar(' ');
				else
					ft_putchar('*');
			}
			w++;
		}
		ft_putchar('\n');
		w = 0;
		h++;
	}
}

void	rush01(int x, int y)
{
	int h;
	int w;

	h = 0;
	w = 0;
	if (x > 0 && y > 0)
		ft_top(x, w);
	if (x > 0 && y > 2)
		ft_middle(x, y, w, h);
	if (x > 0 && y > 1)
	{
		ft_putchar('\\');
		while (x > w + 2)
		{
			ft_putchar('*');
			w++;
		}
		if (x > w + 1)
			ft_putchar('/');
		ft_putchar('\n');
	}
}
