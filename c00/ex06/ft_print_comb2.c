#include <unistd.h>

void	ft_print_result(char res[5], int a, int b)
{
	res[0] = (a / 10) + '0';
	res[1] = (a % 10) + '0';
	res[2] = ' ';
	res[3] = (b / 10) + '0';
	res[4] = (b % 10) + '0';
	write(1, res, 5);
	if (!(a == 98 && b == 99))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int		a;
	int		b;
	char	res[5];

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_print_result(res, a, b);
			b++;
		}
		a++;
	}
}

int main() {
	ft_print_comb2();
	return 0;
}
