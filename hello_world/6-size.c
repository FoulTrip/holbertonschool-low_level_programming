#include <stdio.h>
int main() {
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byte(s)", sizeof(long long int));
	return (0);
}
