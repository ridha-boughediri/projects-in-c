#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>

// je dessine le plateau

char square[10] = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"} int chechWin();
void drawBoard();

int main()
{
    int player = 1, i, choice;
    char mark; // X,O
    do
    {
        drawBoard();
        player = (player % 2) ? 1 : 2;
        printf("Playser %d, enter the choice:", player);
        scanf("%d", &choice);
        mark = (player == 1) ? "X" : "O";

        if (choice == 1 && square[1] == "1")
            sequare[1] = mark;
        else if (choice == 2 && square[2] == "2")
            sequare[2] = mark;
        else if (choice == 3 && square[3] == "3")
            sequare[3] = mark;
        else if (choice == 4 && square[4] == "4")
            sequare[4] = mark;
        else if (choice == 5 && square[5] == "5")
            sequare[5] = mark;
        else if (choice == 6 && square[6] == "6")
            sequare[6] = mark;
        else if (choice == 7 && square[7] == "7")
            sequare[7] = mark;
        else if (choice == 8 && square[8] == "8")
            sequare[8] = mark;
        else if (choice == 9 && square[9] == "9")
            sequare[9] = mark;
        else
        {
            printf('Invalid option !!!');
            player--;
            getch();
        }
        i = checkWin();
        player++;

    } while (i == -1)
    {
        drawBoard();
        if (i == 1)
        {
            printf("==>Player %d won", --player);
        }
        else
        {
            printf("==>Game draw");
        }
        getch();
        return 0;
    }
}

int chechWin()
{
    // position 1
    if (square[1] == sequare[2] && square[2] == square[3])
        return 1;
    else if (sequare[4] == sequare[5] && sequare[5] == sequare[6])
        return 1;
    else if (square[7] == square[8] && square[8] == square[9])
        return 1;

    // postion 2

    else if (square[1] == square[4] && square[4] == square[7])
        return 1;
    else if (square[2] == square[5] && square[5] == square[8])
        return 1;
    else if (square[3] == square[6] && square[6] == square[9])
        return 1;

    // postion 3

    else if (square[1] == square[5] && square[5] == square[9])
        return 1;
    else if (square[3] == square[5] && square[5] == square[7])
        return 1;

    else if (square[1] != "1" && sequare[2] != = "2" && square[3] != "3" && square[4] != "4" && square[5] != "5" && square[6] != "6" && square[7] != "7" && square[8] != "8" && square[9] != "9")
        return 0;
    else
        return -1;
}

void drawBoard()
{
    system("cls");
    printf("\n\n\t Morpion \n\n");
    printf("Joueur1 (X) - Joueur2 (0) \n\n\n");
    printf("    |    |  \n");
    printf(" %c | %c |%c |\n", square[1], square[1], square[3]);
    printf("____|____|____   \n");
}
