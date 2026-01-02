/* Question No: 15
   Program: Linear Search */

#include <stdio.h>

int main() {
    int a[5], i, key;
    printf("Enter 5 elements:\n");
    for (i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < 5; i++) {
        if (a[i] == key) {
            printf("Element found\n");
            return 0;
        }
    }
    printf("Element not found\n");
    return 0;
}