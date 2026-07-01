#include <stdio.h>

int main() {
	int option, num1, num2;
	while (1==1) {
		printf("1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Modulus\n6. Exit\nEnter a number to do that operation: ");
		scanf("%d", &option);
		if (option == 6){
			break;
		}
		else if (option <1 || option >6){
			printf("Invalid option.\n");
			continue;
		}
		else {
			printf("Enter number 1: ");
			scanf("%d", &num1);
			printf("Enter number 2: ");
			scanf("%d", &num2);
			
			switch (option) {
				case 1:
					printf("%d\n", num1+num2);
					break;
				case 2:
					printf("%d\n", num1-num2);
					break;
				case 3:
					printf("%d\n", num1*num2);
					break;
				case 4:
					if (num2 == 0){
						printf("Division by zero is not possible\n");
						break;
					}
					else {	
						printf("%.4f\n", (float)num1/num2);
						break;
					}
				case 5:
					if (num2 == 0){
						printf("Modulus by zero is not possible\n");
						break;
					}
					else {
						printf("%d\n", num1%num2);
						break;
					}
			}
		}
	}
	return 0;
}
