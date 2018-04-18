#include "get_next_line.h"
#include "libft/libft.h"
#include "file_tools.h"
#include "debug_tools.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd = -1;
	int i = 1;
	char *line;

	if (argc == 1)
		fd = 0;
	else if (argc != 2)
	{
		ft_putendl("error file number");
		return (1);
	}
	if (argc == 2)
	{
		fd = open_file(argv[1], O_RDONLY);
//		if (open_file_test(fd))
//			return (1);
	}
	ft_putstr("\x1b[32mOPEN OK \x1b[0m-> ");
	ft_putendl("\x1b[33mLaunching...\x1b[0m");
	int res = -2;
	while (res != 0 && res != -1)
	{
		res = get_next_line(fd, &line);
		ft_putstr("(");
		ft_putnbr(res);
		ft_putstr(") -> ");
//		if (line)
//			ft_putstr_no_sp(line);
		if (line)
			ft_putstr(line);
		if (!line || !line[0])
			ft_putstr_no_sp_red("--x--");
		ft_strclr(line);
		ft_putchar('\n');
		i++;
	}
	close(fd);
	return (0);
}
