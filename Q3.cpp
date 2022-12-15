#include <stdio.h>

int maior(int num1, int num2) {
	if(num1>num2) {
		return num1;
	}
	if(num2>num1) {
		return num2;
	}
}

int main() {
	int n1, n2, teste;
	scanf("%d", &n1);
	scanf("%d", &n2);
	maior(n1,n2);
	teste = maior(n1,n2);
	printf("%d", teste);
	return 0;
}
