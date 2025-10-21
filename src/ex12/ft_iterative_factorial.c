/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:08:39 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/07 10:24:30 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int	ft_iterative_factorial(int nb)
{
	int	fatorial;

	if (nb < 0)
		return (0);
	fatorial = 1;
	while (nb > 1)
	{
		fatorial *= nb;
		nb--;
	}
	return (fatorial);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d",ft_iterative_factorial(5));
}
*/
