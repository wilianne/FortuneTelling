#include <stdio.h>
#include <stdlib.h>

int main()
{
    // prints the game header
    printf("**********************************\n");
    printf("*Welcome The Game fortune telling*\n");
    printf("**********************************\n");

    int numbersecret = 42;
    int choise;

    printf("What's your kick: ");
    scanf("%d", &choise);

    printf("Your kick is %d \n", choise);

    int won = (choise == numbersecret);//0 = F , 1 = T

    if(won){
        printf("Congratulations! You won\n");
        printf("Play again, You are a good player!!\n");
    }
    else{
        int higher = choise > numbersecret;//0 = F , 1 = T
        if(higher){
             printf("Your shot was higher than the number\n");
        }

        else{
            printf("Your shot was lower than the number\n");
        }

    }
    return 0;
}
