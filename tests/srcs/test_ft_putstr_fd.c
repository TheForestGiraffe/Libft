/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_ft_putstr_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pecavalc <pecavalc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 16:37:04 by pecavalc          #+#    #+#             */
/*   Updated: 2025/05/20 17:50:42 by pecavalc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

int	test_ft_putstr_fd(void)
{
	int		fd;
	char	*text = "Written from ft_putstr_fd.";

	fd = open("_test_ft_putstr_fd_test.txt", O_CREAT | O_WRONLY | O_TRUNC, 0644);
	if (fd == -1)
	{
		printf("Cannot read file.\n");
		return (1);
	}
    ft_putstr_fd(text, fd);
	close(fd);
	return (-1);
}
