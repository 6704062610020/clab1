#include<stdio.h>
int main() {
	int num1;
	int num2;
	printf("num1=, <Enter num1> num2=, <Enter num2>\n");
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	if (num1>num2) {
		printf("num1 is greater than num2");
	}
	
	else (num2 > num1) {
		printf("num2 is greater than num1");
	}
	
	return 0;
}
