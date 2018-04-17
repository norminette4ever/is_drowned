#include <get_next_line.h>
#include <libft/libft.h>
#include <stdio.h>

void	ft_putchar_no_sp(char c)
{
	if (c == '\n')
		write(1, "SP", 2);
	else
		write(1, &c, 1);
}

void	ft_putstr_no_sp(char const *s)
{
	int i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			ft_putchar_no_sp(s[i]);
			i++;
		}
	}
}

void	ft_putendl_no_sp(char const *s)
{
	ft_putstr_no_sp(s);
	ft_putchar('\n');
}

void	ft_putstr_no_sp_red(char *s)
{
	char *red;
	char *reset;
	red = "\033[31m";
	reset = "\033[0m";

	s = ft_strjoin(red, s);
	s = ft_strjoin(s, reset);
	ft_putstr_no_sp(s);
}

void	ft_putendl_no_sp_red(char *s)
{
	ft_putstr_no_sp_red(s);
	ft_putchar('\n');
}

void	ft_putstr_no_sp_yellow(char *s)
{
	char *yellow;
	char *reset;
	yellow = "\033[33m";
	reset = "\033[0m";

	s = ft_strjoin(yellow, s);
	s = ft_strjoin(s, reset);
	ft_putstr_no_sp(s);
}

void	ft_putendl_no_sp_yellow(char *s)
{
	ft_putstr_no_sp_yellow(s);
	ft_putchar('\n');
}

void	ft_putstr_no_sp_blue(char *s)
{
	char *blue;
	char *reset;
	blue = "\033[36m";
	reset = "\033[0m";

	s = ft_strjoin(blue, s);
	s = ft_strjoin(s, reset);
	ft_putstr_no_sp(s);
}

void	ft_putendl_no_sp_blue(char *s)
{
	ft_putstr_no_sp_blue(s);
	ft_putchar('\n');
}
