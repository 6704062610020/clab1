#include<stdio.h>
int main() {
	int n1;
	int n2;
	int sum;
	scanf("%d", &n1);
	scanf("%d", &n2);
	
	if (n1>n2) {
		printf("n1 is greater than n2");
		sum = n1 - n2;
		printf("%d", sum);
	}
	
	else {
		printf("n2 is greater than n1");
		sum = n2 - n1;
		printf("%d", sum);
	}
	
	return 0;
}
