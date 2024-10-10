#include <stdio.h>

int main()
{
    int age;
    char gender;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your gender (M/F): ");
    scanf(" %c", &gender);

    if (age >= 18) {
        if (gender == 'M' || gender == 'm') {
            printf("You are eligible for the men's category.\n");
        } else if (gender == 'F' || gender == 'f') {
            printf("You are eligible for the women's category.\n");
        } else {
            printf("Invalid input.\n");
        }
    } else {
        printf("Not eligible.\n");
    }

    return 0;
}
