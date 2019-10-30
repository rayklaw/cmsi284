#include <inttypes.h>
#include <stdio.h>
#include <stdlib.h>

uint64_t gcd(uint64_t x, uint64_t y);

int main(int argc, char *argv[]) {
	if (argc != 3 || argv[1][0] == '-' || argv[2][0] == '-') {
		printf("This program requires exactly two non-negative integer command line inputs.");
	return 0;
	}
	uint64_t x = atoi(argv[1]);
	uint64_t y = atoi(argv[2]);
	printf("The GCD of %lu and %lu is %lu.\n", x, y, gcd(x, y));
	return 0;
}
