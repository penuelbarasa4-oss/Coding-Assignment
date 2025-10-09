//A C program for number guessing

/*: Penuel Barasa Wesonga
reg number: CT100/G/26204
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
int secret, guess, attempts = 0;

srand(time(0)); 
secret = 15;

while (1) {
printf("Enter your guess (1-20): ");
scanf("%d", &guess);
attempts++;

if (guess > secret) {
printf("Too high!\n");
} else if (guess < secret) {
printf("Too low!\n");
} 
else {
printf("Congratulations! You guessed the number in %d attempts.\n", attempts);
break;
}

}

return 0;

}
