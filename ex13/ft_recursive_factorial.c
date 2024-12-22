/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 17:44:57 by mgrandia          #+#    #+#             */
/*   Updated: 2024/12/21 16:03:13 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0 || nb > 12)
		return (0);
	if (nb == 0)
		return (1);
	return (nb * (ft_recursive_factorial(nb - 1)));
}
/*
int	main(void)
{
	int	nb;
	int	f;

	nb = 5;
	f = ft_recursive_factorial(nb);
	printf("%d", f);
	return (0);
}*/
