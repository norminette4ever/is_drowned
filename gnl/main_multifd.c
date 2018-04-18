#include "get_next_line.h"
#include "libft/libft.h"
#include "file_tools.h"
#include "debug_tools.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	int fd[3];
	int res[3];
	int i = 1;
	char *line;
	char *line2;
	char *line3;

	if (argc != 4)
	{
		ft_putendl("please give 3 files");
		return (1);
	}
	fd[0] = open_file(argv[1], O_RDONLY);
	fd[1] = open_file(argv[2], O_RDONLY);
	fd[2] = open_file(argv[3], O_RDONLY);
	ft_putstr("\x1b[32mOPEN OK \x1b[0m-> ");
	ft_putendl("\x1b[33mLaunching...\x1b[0m");
	res[0] = -2;
	res[1] = -2;
	res[2] = -2;
	while (!(res[0] == 0 && res[1] == 0 && res[2] == 0))
	{
		ft_putstr_no_sp("fd 3 -> (");
		res[0] = get_next_line(fd[0], &line);
		ft_putnbr(res[0]);
		ft_putstr(") -> ");
		if (res[0] != -1)
		{
			if (line)
				ft_putstr_no_sp_red(line);
			if (!line || !line[0])
				ft_putstr_no_sp_red("--x--");
			ft_strclr(line);
		}
		ft_putchar('\n');
		ft_putchar('\n');

		ft_putstr_no_sp("fd 4 -> (");
		res[1] = get_next_line(fd[1], &line2);
		ft_putnbr(res[1]);
		ft_putstr(") -> ");
		if (res[1] != -1)
		{
			if (line2)
				ft_putstr_no_sp_blue(line2);
			if (!line2 || !line2[0])
				ft_putstr_no_sp_blue("--x--");
			ft_strclr(line2);
		}
		ft_putchar('\n');
		ft_putchar('\n');

		ft_putstr_no_sp("fd 5 -> (");
		res[2] = get_next_line(fd[2], &line3);
		ft_putnbr(res[2]);
		ft_putstr(") -> ");
		if (res[2] != -1)
		{
			if (line3)
				ft_putstr_no_sp_yellow(line3);
			if (!line3 || !line3[0])
				ft_putstr_no_sp_yellow("--x--");
			ft_strclr(line3);
		}
		ft_putchar('\n');
		ft_putchar('\n');
		i++;
	}
	close(fd[0]);
	close(fd[1]);
	close(fd[2]);
	return (0);
}
