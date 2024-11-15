#include <stdio.h>
#include <math.h> 


double add(double a, double b) {
    return a + b;
}


double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}


double divide(double a, double b) {
    if (b == 0) {
        printf("Error: Division by zero is not allowed.\n");
        return 0;
    }
    return a / b;
}


double logarithm(double a) {
    if (a <= 0) {
        printf("Error: Logarithm of non-positive number is undefined.\n");
        return -1;
    }
    return log10(a);
}


double squareRoot(double a) {
    if (a < 0) {
        printf("Error: Square root of negative number is undefined.\n");
        return -1;
    }
    return sqrt(a);
}

int main() {
    int choice;
    double num1, num2, result;

    while (1) {
        // Displaying menu to the user
        printf("\nSimple Calculator\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Logarithmic value (base 10)\n");
        printf("6. Square Root\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
             
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = add(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 2:
                
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = subtract(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 3:
              
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = multiply(num1, num2);
                printf("Result: %.2lf\n", result);
                break;

            case 4:
              
                printf("Enter two numbers: ");
                scanf("%lf %lf", &num1, &num2);
                result = divide(num1, num2);
                if (num2 != 0) {
                    printf("Result: %.2lf\n", result);
                }
                break;

            case 5:
           
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = logarithm(num1);
                if (result != -1) {
                    printf("Logarithm (base 10) of %.2lf is %.2lf\n", num1, result);
                }
                break;

            case 6:
               
                printf("Enter a number: ");
                scanf("%lf", &num1);
                result = squareRoot(num1);
                if (result != -1) {
                    printf("Square root of %.2lf is %.2lf\n", num1, result);
                }
                break;

            case 7:
                // Exit
                printf("Exiting the program.\n");
                return 0;

            default:
               
                printf("Invalid choice. Please try again.\n");
                break;
        }
    }

    return 0;
}
