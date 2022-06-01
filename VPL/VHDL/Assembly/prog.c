#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int multiplo(int n)
{
	int odd_count = 0;
	int even_count = 0;

	if (n < 0)
		n = -n;
	if (n == 0)
		return 1; // 1 = sim, "n" é multiplo
	if (n == 1)
		return 0; // 0 = não, "n" não é multiplo
	
	while (n) {
		if (n & 1)
			odd_count++;

		if (n & 2)
			even_count++;

		n = n >> 2;
	}

	return multiplo(abs(odd_count - even_count));
}

int main()
{
	int num;
	printf("Digite um numero inteiro: ");
	scanf("%d", &num);
	if (multiplo(num))
		printf("%d e multiplo de 3", num);
	else
		printf("%d nao e multiplo de 3", num);
	return 0;
}