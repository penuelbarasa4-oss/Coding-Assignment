// A C program
/*Name: Penuel Barasa Wesonga
Registration number: CT100/G/26204/25
*/

#include <stdio.h>

int main() {
    int age;
    float income;

    // for input
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (in Sh): ");
    scanf("%f", &income);

    
    if (age >= 21 && income >= 21000) {
        printf("Congratulations you qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
    