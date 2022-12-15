#include <stdio.h>

int dobro(int num) {
	return 2 * num;
}

int main() {
	int n, j;
	scanf("%d", &n);
	dobro(n);
	j = dobro(n);
	printf("%d", j);
	return 0;
}
