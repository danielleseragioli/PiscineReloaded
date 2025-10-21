/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 11:16:57 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/09 20:48:13 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	size;
	int	*range;

	i = 0;
	if (min >= max)
		return (NULL);
	size = max - min;
	range = (int *)malloc(size * sizeof(int));
	if (!range)
		return (0);
	while (i < size)
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}
