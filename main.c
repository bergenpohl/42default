#include <unistd.h>

void	function(char *str) {

}

int	main(int argc, char *argv[]) {
	if (argc == 2) function(str);
	write(1, "\n", 1);
	return 0;
}
