/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dseragio <dseragio@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 12:52:33 by dseragio          #+#    #+#             */
/*   Updated: 2025/10/09 20:28:37 by dseragio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <fcntl.h>

void	ft_putstr_err(char *str)
{
	while (*str)
		write(2, str++, 1);
}

void	ft_display_file(char *filename)
{
	int		filedirector;
	int		bytesread;
	char	buf[4096];

	filedirector = open(filename, O_RDONLY);
	if (filedirector == -1)
	{
		ft_putstr_err("Cannot read file.\n");
		return ;
	}
	bytesread = read(filedirector, buf, 4096);
	while (bytesread > 0)
	{
		write(1, buf, bytesread);
		bytesread = read(filedirector, buf, 4096);
	}
	close(filedirector);
}

int	main(int ac, char **av)
{
	if (ac < 2)
		ft_putstr_err("File name missing.\n");
	else if (ac > 2)
		ft_putstr_err("Too many arguments.\n");
	else
		ft_display_file(av[1]);
	return (0);
}
