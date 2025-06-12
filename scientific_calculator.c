#include <stdio.h>
#include <math.h>

int main() {
    int choice;
    double num1, num2, result;

    printf("Welcome\n");

    do {
        // Menu display
        printf("\nChoose an operation:\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (x^y)\n");
        printf("6. Square root (√x)\n");
        printf("7. Logarithm (log base 10)\n");
        printf("8. Sine (sin x in degrees)\n");
        printf("9. Cosine (cos x in degrees)\n");
        printf("10. Exit\n");
        printf("Enter your choice (1–10): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 + num2;
                printf("Result: %.2lf\n", result);
                break;
            case 2:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 - num2;
                printf("Result: %.2lf\n", result);
                break;
            case 3:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = num1 * num2;
                printf("Result: %.2lf\n", result);
                break;
            case 4:
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                if (num2 != 0) {
                    result = num1 / num2;
                    printf("Result: %.2lf\n", result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                printf("Enter base and exponent: ");
                scanf("%lf %lf", &num1, &num2);
                result = pow(num1, num2);
                printf("Result: %.2lf\n", result);
                break;
            case 6:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 >= 0) {
                    result = sqrt(num1);
                    printf("Square root: %.2lf\n", result);
                } else {
                    printf("Error: Negative number has no real square root.\n");
                }
                break;
            case 7:
                printf("Enter a number: ");
                scanf("%lf", &num1);
                if (num1 > 0) {
                    result = log10(num1);
                    printf("Log base 10: %.2lf\n", result);
                } else {
                    printf("Error: Logarithm undefined for non-positive numbers.\n");
                }
                break;
            case 8:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = sin(num1 * M_PI / 180);  
                
                printf("Sine: %.4lf\n", result);
                break;
            case 9:
                printf("Enter angle in degrees: ");
                scanf("%lf", &num1);
                result = cos(num1 * M_PI / 180);  
                
                printf("Cosine: %.4lf\n", result);
                break;
            case 10:
                printf("Thank you\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 10.\n");
        }
    } while (choice != 10);  
    
    return 0;

}

