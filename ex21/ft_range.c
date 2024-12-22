/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 14:55:24 by mgrandia          #+#    #+#             */
/*   Updated: 2024/12/22 15:19:29 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*mall;
	int	i;

	if (min >= max)
		return (NULL);
	i = 0;
	mall = (int *)malloc((max - min) * sizeof(int));
	if (mall == NULL)
		return (NULL);
	while (i < (max - min))
	{
		mall [i] = min + i;
		i ++;
	}
	return (mall);
}
/*
int	main(void)
{
	int	*range;
	int	i;
	int	min;
	int	max;

	i = 0;
	min = 3;
	max = 5;
	range = ft_range(3, 5);
	if (range != NULL)
	{
		while (i < (max - min))
		{
			printf("%d", range[i]);
			i++;
		}
	}
	return (0);
}*/
