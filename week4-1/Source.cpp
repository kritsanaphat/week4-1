#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void Rectangle_Square(int a, int b) {
	if (a > 0 && b > 0) {
		if (a == b) {
			printf("area of Square = %d \n\n", a * b);
		}
		else printf("area of Rectangle = %d \n\n", a * b);
	}
	else  printf("Enter positive integer \n\n");
}
void triangle(int a, int b) {
	if (a > 0 && b > 0) {
		float c;
		c = (a * b) * 0.5;
		printf("area of triangle = %.2f\n\n", c);
	}
	else printf("Enter positive integer \n\n");
}
void trapezoid(int a, int b, int d) {
	if (a > 0 && b > 0 && d > 0) {
		float c;
		c = ((a + b) * d) * 0.5;
		printf("area of trapizoide = %.2f\n", c);
	}
	else printf("Enter positive integer \n\n");
}
int main() {
	int i, num1, num2,num3;
	do {
		printf("   !!GEOMETRY!!   \n\n");
		printf("1 Rectangle_Square\n");
		printf("2 triangle\n");
		printf("3 trapezoid\n");
		printf("4 Exit\n");
		printf("Select choice :");
		scanf_s("%d", &i);

		if (i < 1 || i>4) printf("Enter 1-4 only\n");
		else if (i == 4) break;
		else {
			if (i == 1) {
				printf("Enter side1 :");
				scanf("%d", &num1);
				printf("Enter side2 :");
				scanf("%d", &num2);
				Rectangle_Square(num1, num2);
			}
			else if (i == 2) {
				printf("Enter base :");
				scanf("%d", &num1);
				printf("Enter high :");
				scanf("%d", &num2);
				triangle(num1, num2);
			}
			else if (i == 3) {
				printf("Enter Parallel side 1:");
				scanf("%d", &num1);
				printf("Enter Parallel side 2:");
				scanf("%d", &num2);
				printf("Enter high:");
				scanf("%d", &num3);
				trapezoid(num1, num2, num3);
			}
		}
	} while (i != 4);
}