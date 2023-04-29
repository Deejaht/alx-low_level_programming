#include <stdio.h>
#include <unistd.h>

int main (void)
{
	int c = 4;

	printf ("Hol");
	write (1, &c, 1);
}
