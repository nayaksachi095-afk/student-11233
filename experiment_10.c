/* Question No: 10
   Program: Calculator */

#include <stdio.h>

int main() {
    int a, b, ch;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("1.Add 2.Subtract 3.Multiply 4.Divide\n");
    scanf("%d", &ch);

    switch (ch) {
        case 1: printf("Result = %d\n", a + b); break;
        case 2: printf("Result = %d\n", a - b); break;
        case 3: printf("Result = %d\n", a * b); break;
        case 4: printf("Result = %d\n", a / b); break;
        default: printf("Invalid choice\n");
    }
    return 0;
}