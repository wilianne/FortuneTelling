#include <stdio.h>
#include <stdlib.h>
#include <time.h>
// #define QUANTITY 3 // constant
int main()
{
    // prints the game header
    printf("\n\n");

    printf("                            Welcome The Game fortune telling\n");
    printf("                                                         P\n");
    printf("                            F~                          /\\\n");
    printf("                           /\\                          /__\\\n");
    printf("                          /__\\                         |. |\n");
    printf("                          |n |                       :_|__|_:\n");
    printf("                        :_|  |_:               p       |. |\n");
    printf("                          | n|    p      p    /\\       |. |\n");
    printf("                          |  |   /\\_____/\\   /__\\      |. |\n");
    printf("                          |n |_=_|. . . .|_=_=_=_=_=_=_|. |\n");
    printf("                          |n |. .|  ___  |. . . . . . .|. |\n");
    printf("                          |n |   | |   | |             |. |\n");
    printf("                          |__|__|___|_|___|_|_____________|__|__\n");
    printf("                          /          /   /                      \\\n");
    printf("\n\n");
    int second = time(0);
    srand(second); // seed for it to leave random all the time

    int bignumber = rand();
    int numbersecret = bignumber % 100;
    int choise;
    double points = 1000;

    int win;

    int level;
    printf("What is the difficulty level?\n");
    printf("(1)Easy (2)Medium (3)Difficult\n\n");
    printf("Choice: ");
    scanf("%d", &level);

    int numbertry;

    switch (level)
    {
    case 1:
        numbertry = 20;
        break;
    case 2:
        numbertry = 15;
        break;
    default:
        numbertry = 6;
        break;
    }
    /*if(level == 1){
        numbertry = 20;
    }
    else if(level == 2){
        numbertry = 15;
    }
    else{
        numbertry = 6;
    }*/

    for (int i = 1; i <= numbertry; i++)
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

        win = (choise == numbersecret);       // 0 = F , 1 = T
        int higher = (choise > numbersecret); // 0 = F , 1 = T

        if (win)
        {
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

        double pointlost = abs(choise - numbersecret) / (double)2;

        points = points - pointlost;
    }
    printf("END OF GAME!!\n");
    if (win)
    {
        printf("Congratulations! You won\n");
        printf("Your win in tentative %d\n", numbertry);
        printf("Total points: %.1f\n", points);

        printf("                              __ooooooooo__\n");
        printf("                         oOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("                       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("                    oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("                  oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("                oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("               oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo\n");
        printf("              oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo\n");
        printf("              oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo\n");
        printf("              oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo\n");
        printf("              oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo\n");
        printf("              oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo\n");
        printf("               *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*\n");
        printf("                *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*\n");
        printf("                 *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*\n");
        printf("                  *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*\n");
        printf("                   *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*\n");
        printf("                     *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*\n");
        printf("                        *OOOOOOOOo           oOOOOOOOO*\n");
        printf("                           *OOOOOOOOOOOOOOOOOOOOO*\n");
        printf("                                "
               "ooooooooo"
               " \n");
    }
    else
    {
        printf("You lost!Try again!\n");

        printf("                        oooo$$$$$$$$$$$$oooo\n");
        printf("                     oo$$$$$$$$$$$$$$$$$$$$$$$$o\n");
        printf("                   oo$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o         o$   $$ o$\n");
        printf("   o $ oo        o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$o       $$ $$ $$o$\n");
        printf("oo $ $ \"$      o$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$o       $$$o$$o$\n");
        printf(" $$$$$$o$     o$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$o    $$$$$$$$\n");
        printf("  $$$$$$$    $$$$$$$$$$$      $$$$$$$$$$$      $$$$$$$$$$$$$$$$$$$$$$$\n");
        printf("  $$$$$$$$$$$$$$$$$$$$$$$    $$$$$$$$$$$$$    $$$$$$$$$$$$$$  \"\"\"$$$\n");
        printf("    $$$\"\"\"\"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$\n");
        printf("    $$$   o$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     \"$$$o\n");
        printf("   o$$\"   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$       $$$o\n");
        printf("    $$$    $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$\" \"$$$$$$ooooo$$$$o\n");
        printf("    o$$$oooo$$$$$  $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$   o$$$$$$$$$$$$$$$$$\n");
        printf("    $$$$$$$$\"$$$$   $$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$     $$$$\"\"\"\"\"\"\"\"\n");
        printf("    \"\"\"       $$$$    \"$$$$$$$$$$$$$$$$$$$$$$$$$$$$\"      o$$$\n");
        printf("               \"$$$o     \"\"\"$$$$$$$$$$$$$$$$$$\"$$\"         $$$\n");
        printf("                 $$$o          \"$$\"\"$$$$$$\"\"\"\"           o$$$\n");
        printf("                  $$$$o                 oo             o$$$\"\n");
        printf("                    \"$$$$o      o$$$$$$o\"$$$$o        o$$$$\n");
        printf("                      \"$$$$$oo     \"\"$$$$o$$$$$o   o$$$$\"\"\n");
        printf("                         \"\"$$$$$oooo  \"$$$o$$$$$$$$$\"\"\"\n");
        printf("                            \"\"$$$$$$$oo $$$$$$$$$$\n");
        printf("                                     \"\"\"$$$$$$$$$$$\n");
        printf("                                        $$$$$$$$$$$$\n");
        printf("                                         $$$$$$$$$$\n");
        printf("                                          \"$$$\"\"\"\"\n");

        return 0;
    }
}
