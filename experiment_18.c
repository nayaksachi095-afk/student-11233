/* Question No: 18
   Program: Sum of 2D Array */

#include <stdio.h>

int main() {
    int a[2][2], i, j, sum = 0;
    printf("Enter elements:\n");

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++) {
            scanf("%d", &a[i][j]);
            sum += a[i][j];
        }

    printf("Sum = %d\n", sum);
    return 0;
}