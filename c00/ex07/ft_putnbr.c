#include <unistd.h>

void	ft_putnbr(int nb)
{
	long	lnum;
	char	c;

	lnum = nb;
	if (lnum < 0)
	{
		write(1, "-", 1);
		lnum = -lnum;
	}
	if (lnum > 10)
	{
		ft_putnbr(lnum / 10);
	}
	c = (lnum % 10) + '0';
	write(1, &c, 1);
}

int main() {
	ft_putnbr(-2147483648);
	return 0;
}
