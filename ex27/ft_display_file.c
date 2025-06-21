/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ckarsent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 23:02:06 by ckarsent          #+#    #+#             */
/*   Updated: 2024/11/07 23:02:10 by ckarsent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>

int	verif(int arc)
{
	if (arc < 2)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (arc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int		fil;
	char	cara;

	if (!verif(argc))
		return (1);
	fil = open(argv[1], O_RDONLY);
	if (fil < 0)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	while (read(fil, &cara, 1))
		write(1, &cara, 1);
	close(fil);
	return (0);
}
