#include <libft.h>
#include "file_tools.h"

int		open_file(char *file, int option)
{
	int fd;

	fd = -1;
	if (open(file, O_DIRECTORY) != -1)
		return (-2);
	fd = open(file, option);
	return (fd);
}

int		open_file_test(int fd)
{
	if (fd == -1)
	{
		ft_putendl("open failed");
		return (-1);
	}
	if (fd == -2)
	{
		ft_putendl("open failed : path is directory");
		return (-1);
	}
	return (0);
}
