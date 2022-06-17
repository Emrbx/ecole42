#include <stdio.h>

void	ft_putstr(char *str);

int		main(void)
{
	char str[] = "Sa cnm";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}