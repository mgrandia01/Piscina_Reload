/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:26:13 by mgrandia          #+#    #+#             */
/*   Updated: 2024/12/21 17:55:13 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	num;

	num = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		num = nb * num;
		nb --;
	}
	return (num);
}
/*
int	main(void)
{
	int	nb;
	int	f;

	nb = 5;
	f = ft_iterative_factorial(nb);
	printf("%d", f);
	return (0);
}*/
