#include <stdio.h>
int main() {
	int a = 1100;
	int b = 30000;
	int r = 1;

	int init_a = a;
	int init_b = b;
	while(r > 0){
		r = a - b * div(a,b);
		a = b;
		b = r;
	};
	printf("gcd(%d,%d) = %d\n", init_a, init_b, a);
}
