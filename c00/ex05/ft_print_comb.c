#include <unistd.h>

void    ft_print_digits(char d[3])
{
    write(1, d, 3);
    if (!(d[0] == '7' && d[1] == '8' && d[2] == '9'))
    {
        write(1, ", ", 2);
    }
}

void	ft_print_comb(void)
{	
	char	digits[3];

	digits[0] = '0';
	while (digits[0] <= '7')
	{
		digits[1] = digits[0] + 1;
		while (digits[1] <= '8')
		{
			digits[2] = digits[1] + 1;
			while (digits[2] <= '9')
			{
				ft_print_digits(digits);
				digits[2]++;
			}
			digits[1]++;
		}
		digits[0]++;
	}
}

int main() {
	ft_print_comb();
	return 0;
}
