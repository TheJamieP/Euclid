#include <stdio.h>

int recursiveEuclid(int a, int b){
	if (b < 1) return a;

	return recursiveEuclid(b, a - b * (a/b));
}
int main() {
	int a = 2024;
	int b = 612;
	printf("gcd(%d,%d) = %d\n", a, b, recursiveEuclid(a,b));
}
