/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/21 19:16:15 by mgrandia          #+#    #+#             */
/*   Updated: 2024/12/22 15:28:56 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
/*
void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}*/

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i ++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	char	*mall;

	i = 0;
	mall = (char *)malloc((ft_strlen(src) + 1) * sizeof(char));
	if (mall == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		mall[i] = src[i];
		i++;
	}
	mall[i] = '\0';
	return (mall);
}
/*
int	main(void)
{
	
	//ft_putstr(mall); add before return in *ft_strdup to check
	ft_strdup("hola");
	return (0);
}*/
