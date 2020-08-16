#include<stdio.h>
#include<math.h>
int main() {
	int num1, num2, i = 0, n = 0, temp = 0;
	float num[99], avr = 0, sum = 0, sumpow = 0;
	printf("Enter Numbers : ");
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2) {
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	if (num2 >= num1) {
		for (i = 0;num1 <= num2;i++) {
			num[i] = num1;/*express number between num1 and num2*/
			printf("%d ", num1);
			num1++;
			sum += num[i];
			n++;
		}
		avr = sum / n; /*an average*/
		printf("\nAverage = %.1f\n", avr);
		for (i = 0;i < n;i++) {
			float numpow[99];
			num[i] = num[i] - avr;
			numpow[i] = pow(num[i], 2);
			sumpow += numpow[i];
		}
		if (sumpow != 0)printf("SD : %.2f", sqrt(sumpow / (n - 1.0)));
		else printf("SD : 0");
	}
	return 0;
}
