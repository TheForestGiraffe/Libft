#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	test_get_next_line(void)
{
	int		fd_1;
	int		fd_2;
	int		fd_3;
	
	fd_1 = open("get_next_line_test_files/empty.txt", O_RDONLY);
	fd_2 = open("get_next_line_test_files/1char.txt", O_RDONLY);
	fd_3 = open("get_next_line_test_files/lorem.txt", O_RDONLY);

	if ((fd_1 < 0) || (fd_2 < 0) || (fd_3 < 0))
	{
		printf("Could not open one of the files.\n");
		return (0);
	}

	if (get_next_line(fd_1) != "")
		return (0);
	if (get_next_line(fd_2) != "0")
		return (0);
	if (get_next_line(fd_3) != "Lorem ipsum dolor sit amet.")
		return (0);
	if (get_next_line(fd_3) != "")
		return (0);
	if (get_next_line(fd_3) != "Nulla magna metus, ornare et mi nec, consectetur ullamcorper neque.")
		return (0);
	if (get_next_line(fd_3) != "")
		return (0);

	close(fd_1);
	close(fd_2);
	close(fd_3);

	return (1);
}
