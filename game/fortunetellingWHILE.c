#include <stdio.h>
#include <stdlib.h>

// #define QUANTITY 3 // constant
int main()
{
    // prints the game header
    printf("**********************************\n");
    printf("*Welcome The Game fortune telling*\n");
    printf("**********************************\n");

    int numbersecret = 42;
    int choise;

    int i = 1;

    while(1)
    {
        printf("What's your guess: ");
        printf("Try %d\n", i);
        scanf("%d", &choise);
        printf("Your guess is %d \n", choise);

        if (choise < 0)
        {
            printf("You can't guess negative numbers!!\n");
            i--;

            continue; // return to the beginning of the loop i++
        }

        int won = (choise == numbersecret);   // 0 = F , 1 = T
        int higher = (choise > numbersecret); // 0 = F , 1 = T

        if (won)
        {
            printf("Congratulations! You won\n");
            printf("Play again, You are a good player!!\n");

            break;
        }
        else if (higher)
        {
            printf("Your shot was higher than the number\n");
        }
        else
        {
            printf("Your shot was lower than the number\n");
        }
        i++;
    }
    printf("END OF GAME!!");
    printf("Your win in tentative %d\n", i);
    return 0;
}
