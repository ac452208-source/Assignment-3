#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, chances;
    char choice;

    do {
        system("cls");
        printf("===== NUMBER GUESSING GAME =====\n\n");

        srand(time(0));
        number = rand() % 100 + 1;
        chances = 7;

        while (chances > 0) {
            printf("Guess the number (1-100): ");
            scanf("%d", &guess);

            if (guess == number) {
                printf("\n🎉 Correct! You win!\n");
                break;
            } else if (guess > number) {
                printf("Too High!\n");
            } else {
                printf("Too Low!\n");
            }

            chances--;
            printf("Chances left: %d\n\n", chances);
        }

        if (chances == 0)
            printf("\n❌ You lost! The number was %d\n", number);

        printf("\nPress R to play again or Q to quit: ");
        getchar();
        choice = getchar();

    } while (choice == 'r' || choice == 'R');

    return 0;
}
