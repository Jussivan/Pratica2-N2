#include <stdio.h>

int calculo(int num1, int num2) {
	if(num1>num2) {
		return 2 * num1;
	}
	if(num2>num1) {
		return 2 * num2;
	}
}

int main() {
	int n1, n2, teste;
	scanf("%d", &n1);
	scanf("%d", &n2);
	calculo(n1,n2);
	teste = calculo(n1,n2);
	printf("%d", teste);
	return 0;
}
