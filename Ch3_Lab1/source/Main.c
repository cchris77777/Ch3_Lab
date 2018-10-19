#include<stdio.h>
#include<stdlib.h>
int Odd(int U);
int Even(int U);
int TotalSum(int U);
int main(void) {
	int n, Sum, AddChoice;
	printf("1+2+...+n=?PLZ insert n=");
	scanf_s("%d", &n);
		fflush(stdin);
		printf("Sum of Odd(0),Sum of Even(1),Sum of Interger(2)PLZ insert:");
		scanf_s("%d", &AddChoice);
		switch (AddChoice) {
		case 0:
			Sum = Odd(n);
			break;
		case 1:
			Sum = Even(n);
			break;
		case 2:
			Sum = TotalSum(n);
			break;
		default:
			printf("insert Error\n");
			return -1;
		}
		printf("The TotalSum is %d \n", Sum);
		system("pause");
		return 0;
}
int Odd(int U) {
	int total = 0;
	for (int i = 1; i < U; i++)
		if (i % 2 == 1)
			total += i;
	return total;
}
int Even(int U) {
	int total = 0;
	for (int i = 1; i < U; i++)
		if (i % 2 == 0)
			total += i;
	return total;
}
int TotalSum(int U) {
	return Odd(U) + Even(U);
}