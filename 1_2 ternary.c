#include <stdio.h>

int find_biggest(int num1, int num2) {
    int biggest = (num1 > num2) ? num1 : num2;
    return biggest;
}

int main() {
	int num1, num2;
	printf("Enter the first number:");
	scanf("%d",&num1);
	printf("Enter the second number:");
	scanf("%d",&num2);
    int result = find_biggest(num1, num2);
    printf("the result is %d biggest number using ternary operator\n", result);  

    return 0;
}
