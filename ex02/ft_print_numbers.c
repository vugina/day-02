#include	<unistd.h>

void	ft_putchar(char c){
	write(1, &c, 1);
}

void ft_print_numbers(void) {
	char start;
	
	start = '0';
	while (start <= '9') {
		ft_putchar(start);
		start++;
	}
}
