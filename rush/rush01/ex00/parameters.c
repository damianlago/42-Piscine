/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameters.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparejo- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/06 22:10:21 by jparejo-          #+#    #+#             */
/*   Updated: 2020/12/06 22:37:15 by jparejo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	param_up(char **c, int *a)
{
	int n;
	int cont;

	n = 0;
	cont = 0;
	while (c[1][n] != '\0')
	{
		if (n >= 0 && n <= 7)
		{
			a[cont] = (int)(c[1][n] - '0');
			cont++;
		}
		n++;
	}
}

void	param_down(char **c, int *a)
{
	int n;
	int cont;

	n = 0;
	cont = 0;
	while (c[1][n] != '\0')
	{
		if (n >= 8 && n <= 15)
		{
			a[cont] = (int)(c[1][n] - '0');
			cont++;
		}
		n++;
	}
}

void	param_left(char **c, int *a)
{
	int n;
	int cont;

	n = 0;
	cont = 0;
	while (c[1][n] != '\0')
	{
		if (n >= 16 && n <= 23)
		{
			a[cont] = (int)(c[1][n] - '0');
			cont++;
		}
		n++;
	}
}

void	param_right(char **c, int *a)
{
	int n;
	int cont;

	n = 0;
	cont = 0;
	while (c[1][n] != '\0')
	{
		if (n >= 24 && n <= 31)
		{
			a[cont] = (int)(c[1][n] - '0');
			cont++;
		}
		n++;
	}
}
