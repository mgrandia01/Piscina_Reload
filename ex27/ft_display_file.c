/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgrandia <mgrandia@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:49:17 by mgrandia          #+#    #+#             */
/*   Updated: 2024/12/28 13:18:49 by mgrandia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(char *argv)
{
	int		file;
	char	ch;

	file = open(argv, O_RDONLY);
	if (file < 0)
	{
		write (2, "Cannot read file.\n", 18);
		return ;
	}
	while (read (file, &ch, 1))
		write (1, &ch, 1);
	close(file);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		ft_display_file(argv[1]);
	else if (argc < 2)
		write (2, "File name missing.\n", 19);
	else
		write (2, "Too many arguments.\n", 20);
	return (0);
}
