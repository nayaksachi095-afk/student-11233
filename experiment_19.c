/* Question No: 19
   Program: String Functions */

#include <stdio.h>
#include <string.h>

int main() {
    char s1[20], s2[20];
    printf("Enter first string: ");
    scanf("%s", s1);
    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Length = %lu\n", strlen(s1));
    strcpy(s1, s2);
    printf("After copy: %s\n", s1);
    strcat(s1, s2);
    printf("After concat: %s\n", s1);
    printf("Compare result = %d\n", strcmp(s1, s2));

    return 0;
}