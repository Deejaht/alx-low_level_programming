#include <stdio.h>
#include <unistd.h>

int main (void)
{
	int c = 4;

	write(1, "Hol", 3);
	write(1, &c, 1);
	return (0);
}
