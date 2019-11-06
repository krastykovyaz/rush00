/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljune <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/04 15:28:08 by ljune             #+#    #+#             */
/*   Updated: 2019/08/04 19:08:59 by ljune            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putchar_abc(int i, int j, int x, int y)
{
	if (i > 1 && i < y && j > 1 && j < x)
	{
		ft_putchar(' ');
	}
	if (((i == 1 || i == y) && (j > 1 && j < x))
				|| ((j == 1 || j == x) && (i > 1 && i < y)))
	{
		ft_putchar('B');
	}
	if ((i == 1) && (j == 1 || j == x))
	{
		ft_putchar('A');
	}
	if ((i == y) && (j == 1 || j == x) && y > 1)
	{
		ft_putchar('C');
	}
}

int		ft_putchar_one(int x, int y)
{
	if (x == 1 && y == 1)
	{
		ft_putchar('A');
		return (0);
	}
	if (x <= 0 || y <= 0)
	{
		return (0);
	}
	return (1);
}

void	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;
	if (ft_putchar_one(x, y))
	{
		while (i <= y)
		{
			while (j <= x)
			{
				ft_putchar_abc(i, j, x, y);
				j++;
			}
			ft_putchar('\n');
			j = 1;
			i++;
		}
	}
}
