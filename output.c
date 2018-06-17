#include "libtest.h"

void	test(char *message, t_test *a, t_test *b)
{
	ft_putstr(message);
	ft_putstr(": ");
	if(cmp_bytes(a, b) == 0)
		ft_putendl("[OK]");
	else
	{
		ft_putstr("[");
		ft_putnbr(cmp_bytes(a, b));
		ft_putstr("]");
		ft_putendl("[NOJOY]");
	}
}

void	test_n(char *message, t_test *a, t_test *b)
{
		ft_putstr(message);
	ft_putstr(": ");
	if(!cmp_bytes(a, b) == 0)
		ft_putendl("[OK]");
	else
	{
		ft_putstr("[");
		ft_putnbr(cmp_bytes(a, b));
		ft_putstr("]");
		ft_putendl("[NOJOY]");
	}
}