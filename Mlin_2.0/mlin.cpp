#include <stdio.h>
#include <stdlib.h>

int provjera_mlina1(char mlin_polje[16][17], int red_num1, int stup_num1)
{
    if (mlin_polje[red_num1][2] == 'O' && mlin_polje[red_num1][8] == 'O' && mlin_polje[red_num1][14] == 'O')
        return 1;
    if (mlin_polje[red_num1][4] == 'O' && mlin_polje[red_num1][8] == 'O' && mlin_polje[red_num1][12] == 'O')
        return 1;
    if (mlin_polje[red_num1][6] == 'O' && mlin_polje[red_num1][8] == 'O' && mlin_polje[red_num1][10] == 'O')
        return 1;
    if (mlin_polje[red_num1][2] == 'O' && mlin_polje[red_num1][4] == 'O' && mlin_polje[red_num1][6] == 'O')
        return 1;
    if (mlin_polje[red_num1][10] == 'O' && mlin_polje[red_num1][12] == 'O' && mlin_polje[red_num1][14] == 'O')
        return 1;

    if (mlin_polje[2][stup_num1] == 'O' && mlin_polje[8][stup_num1] == 'O' && mlin_polje[14][stup_num1] == 'O')
        return 1;
    if (mlin_polje[4][stup_num1] == 'O' && mlin_polje[8][stup_num1] == 'O' && mlin_polje[12][stup_num1] == 'O')
        return 1;
    if (mlin_polje[6][stup_num1] == 'O' && mlin_polje[8][stup_num1] == 'O' && mlin_polje[10][stup_num1] == 'O')
        return 1;
    if (mlin_polje[2][stup_num1] == 'O' && mlin_polje[4][stup_num1] == 'O' && mlin_polje[6][stup_num1] == 'O')
        return 1;
    if (mlin_polje[10][stup_num1] == 'O' && mlin_polje[12][stup_num1] == 'O' && mlin_polje[14][stup_num1] == 'O')
        return 1;

    return 0;
}

int provjera_mlina2(char mlin_polje[16][17], int red_num2, int stup_num2)
{
    if (mlin_polje[red_num2][2] == 'X' && mlin_polje[red_num2][8] == 'X' && mlin_polje[red_num2][14] == 'X')
        return 1;
    if (mlin_polje[red_num2][4] == 'X' && mlin_polje[red_num2][8] == 'X' && mlin_polje[red_num2][12] == 'X')
        return 1;
    if (mlin_polje[red_num2][6] == 'X' && mlin_polje[red_num2][8] == 'X' && mlin_polje[red_num2][10] == 'X')
        return 1;
    if (mlin_polje[red_num2][2] == 'X' && mlin_polje[red_num2][4] == 'X' && mlin_polje[red_num2][6] == 'X')
        return 1;
    if (mlin_polje[red_num2][10] == 'X' && mlin_polje[red_num2][12] == 'X' && mlin_polje[red_num2][14] == 'X')
        return 1;

    if (mlin_polje[2][stup_num2] == 'X' && mlin_polje[8][stup_num2] == 'X' && mlin_polje[14][stup_num2] == 'X')
        return 1;
    if (mlin_polje[4][stup_num2] == 'X' && mlin_polje[8][stup_num2] == 'X' && mlin_polje[12][stup_num2] == 'X')
        return 1;
    if (mlin_polje[6][stup_num2] == 'X' && mlin_polje[8][stup_num2] == 'X' && mlin_polje[10][stup_num2] == 'X')
        return 1;
    if (mlin_polje[2][stup_num2] == 'X' && mlin_polje[4][stup_num2] == 'X' && mlin_polje[6][stup_num2] == 'X')
        return 1;
    if (mlin_polje[10][stup_num2] == 'X' && mlin_polje[12][stup_num2] == 'X' && mlin_polje[14][stup_num2] == 'X')
        return 1;

    return 0;
}

int provjera_tocnosti1(int red1, int stup1)
{
    if (red1 == '1' && stup1 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '1' && stup1 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '1' && stup1 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '1' && stup1 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '2' && stup1 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '2' && stup1 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '2' && stup1 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '2' && stup1 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '3' && stup1 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '3' && stup1 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '3' && stup1 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '3' && stup1 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '4' && stup1 == 'd')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '5' && stup1 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '5' && stup1 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '5' && stup1 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '5' && stup1 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '6' && stup1 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '6' && stup1 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '6' && stup1 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '6' && stup1 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red1 == '7' && stup1 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '7' && stup1 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '7' && stup1 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red1 == '7' && stup1 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    return 0;
}

int provjera_tocnosti2(int red2, int stup2)
{
    if (red2 == '1' && stup2 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '1' && stup2 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
        ;
    }
    if (red2 == '1' && stup2 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '1' && stup2 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red2 == '2' && stup2 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '2' && stup2 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '2' && stup2 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '2' && stup2 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red2 == '3' && stup2 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '3' && stup2 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '3' && stup2 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '3' && stup2 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red2 == '4' && stup2 == 'd')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red2 == '5' && stup2 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '5' && stup2 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '5' && stup2 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '5' && stup2 == 'g')
    {
        printf("Pogresne koordinate!");
        return 1;
    }

    if (red2 == '6' && stup2 == 'a')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '6' && stup2 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '6' && stup2 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '6' && stup2 == 'g')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }

    if (red2 == '7' && stup2 == 'b')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '7' && stup2 == 'c')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '7' && stup2 == 'e')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    if (red2 == '7' && stup2 == 'f')
    {
        printf("Pogresne koordinate!\n");
        return 1;
    }
    return 0;
}
/*
int provjera_pomaka(int red1, int stup1)
{
  int flagR = 0, flagS = 0;
  int moguci_redak[5] = {0, 0, 0, 0, 0};
  char moguci_stupac[6] = {'x', 'x', 'x', 'x', 'x'};
  if(red1 == 1 && stup1 == 'a'){
    moguci_redak[0] = 1;
    moguci_redak[1] = 4;
    moguci_stupac[0] = 'a';
    moguci_stupac[1] = 'd';
  }
  //upis željenog mjesta
  for(int i = 0; i < 5; i++)
    {
      if(moguci_redak[i] == red1)
        flagR = 1;
      if(moguci_stupac[i] == stup1)
        flagS = 1;
    }
  if(flagR == 1 && flagS == 1)
    goto //upis figurice u željeno polje
  else
    //greška
}
*/
void switch_case1(int red1, int red_num1, char stup1, int stup_num1)
{
    switch (red1)
    {
    case '1':
        red_num1 = 2;
        break;

    case '2':
        red_num1 = 4;
        break;

    case '3':
        red_num1 = 6;
        break;

    case '4':
        red_num1 = 8;
        break;

    case '5':
        red_num1 = 10;
        break;

    case '6':
        red_num1 = 12;
        break;

    case '7':
        red_num1 = 14;
        break;
    }
    switch (stup1)
    {
    case 'a':
        stup_num1 = 2;
        break;

    case 'b':
        stup_num1 = 4;
        break;

    case 'c':
        stup_num1 = 6;
        break;

    case 'd':
        stup_num1 = 8;
        break;

    case 'e':
        stup_num1 = 10;
        break;

    case 'f':
        stup_num1 = 12;
        break;

    case 'g':
        stup_num1 = 14;
        break;
    }
}
void switch_case2(int red2, int red_num2, char stup2, int stup_num2)
{
    switch (red2)
    {
    case '1':
        red_num2 = 2;
        break;

    case '2':
        red_num2 = 4;
        break;

    case '3':
        red_num2 = 6;
        break;

    case '4':
        red_num2 = 8;
        break;

    case '5':
        red_num2 = 10;
        break;

    case '6':
        red_num2 = 12;
        break;

    case '7':
        red_num2 = 14;
        break;
    }

    switch (stup2)
    {
    case 'a':
        stup_num2 = 2;
        break;

    case 'b':
        stup_num2 = 4;
        break;

    case 'c':
        stup_num2 = 6;
        break;

    case 'd':
        stup_num2 = 8;
        break;

    case 'e':
        stup_num2 = 10;
        break;

    case 'f':
        stup_num2 = 12;
        break;

    case 'g':
        stup_num2 = 14;
        break;
    }
}
int main()
{
    int izbor;
    while (1)
    {
        system("cls");
        printf("  _____ _                              _                              _     \n");
        printf(" /__   \\ |__   ___     /\\/\\   ___ _ __( )__     /\\/\\   ___  _ __ _ __(_)___ \n");
        printf("   / /\\/ '_ \\ / _ \\   /    \\ / _ \\ '_ \\/ __|   /    \\ / _ \\| '__| '__| / __|\n");
        printf("  / /  | | | |  __/  / /\\/\\ \\  __/ | | \\__ \\  / /\\/\\ \\ (_) | |  | |  | \\__ \\\n");
        printf("  \\/   |_| |_|\\___|   \\/    \\/\\___|_| |_|___/  \\/    \\/\\___/|_|  |_|  |_|___/\n\n\n");
        printf("Unesite broj zeljenog odabira:\n");
        printf("1. Start\n");
        printf("2. Rules\n");
        printf("3. Exit\n");
        scanf("%d", &izbor);
        if (izbor == 1)
        {
            int countX = 9, countO = 9;
            int count1 = 9;
            system("cls");
            char mlin_polje[16][17] = {
                "################",
                "# a b c d e f g#",
                "#1 ----- ----- #",
                "# |     |     |#",
                "#2|  --- ---  |#",
                "# | |   |   | |#",
                "#3| |  - -  | |#",
                "# | | |   | | |#",
                "#4 - -     - - #",
                "# | | |   | | |#",
                "#5| |  - -  | |#",
                "# | |   |   | |#",
                "#6|  --- ---  |#",
                "# |     |     |#",
                "#7 ----- ----- #",
                "################",
            };
            for (int i = 0; i < 16; i++)
            {
                for (int j = 0; j < 16; j++)
                    printf(" %c", mlin_polje[i][j]);
                printf("\n");
            }
            printf("\n");
            char red1, stup1, red2, stup2;
            int red_num1, stup_num1, red_num2, stup_num2, count = 1;
            printf("Prvo unesite koordinate redaka pa onda stupaca!(N,x)\n");
            while (count <= 9)
            {
            povratak_prviigrac:
                printf("1. igrac:\n");
                scanf(" %c,%c", &red1, &stup1);
                if (provjera_tocnosti1(red1, stup1))
                {
                    goto povratak_prviigrac;
                }
                else
                {
                    switch_case1(red_num1, red1, stup1, stup_num1);
                    if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                    {
                        printf("Unijeli ste pogresni broj!\n");
                    }
                    if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                    {
                        printf("Unijeli ste pogresno slovo!\n");
                        goto povratak_prviigrac;
                    }
                    if (mlin_polje[red_num1][stup_num1] == ' ')
                    {
                        for (int i = 2; i <= red_num1; i++)
                        {
                            for (int j = 2; j <= stup_num1; j++)
                            {
                                if (i == red_num1 && j == stup_num1)
                                    mlin_polje[i][j] = 'O';
                            }
                        }
                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    else
                    {
                        printf("Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                        goto povratak_prviigrac;
                    }
                }
                if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                {
                    countX--;
                    count1--;
                    printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                    povratak_mlin1:
                    scanf(" %c,%c", &red1, &stup1);
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak_mlin1;
                    else
                    {
                        switch_case1(red_num1, red1, stup1, stup_num1);
                        if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak_mlin1;
                        }
                        if (mlin_polje[red_num1][stup_num1] == 'X')
                        {
                            for (int i = 2; i <= red_num1; i++)
                            {
                                for (int j = 2; j <= stup_num1; j++)
                                {
                                    if (i == red_num1 && j == stup_num1)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                        else
                        {
                            printf("Odabrali ste svoju figuru ili ste odabrali prazno mjesto!\nMolimo odaberite mjesto gdje se nalaze protivnicke figure!\n");
                            goto povratak_mlin1;
                        }
                    }
                }
            povratak_drugiigrac:
                printf("2. igrac:\n");
                scanf(" %c,%c", &red2, &stup2);
                if (provjera_tocnosti2(red2, stup2))
                    goto povratak_drugiigrac;
                else
                {
                    switch_case2(red_num2, red2, stup2, stup_num2);
                    if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                    {
                        printf("Unijeli ste pogresni broj!\n");
                    }
                    if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                    {
                        printf("Unijeli ste pogresno slovo!\n");
                        goto povratak_drugiigrac;
                    }
                    if (mlin_polje[red_num2][stup_num2] == ' ')
                    {
                        for (int i = 2; i <= red_num2; i++)
                        {
                            for (int j = 2; j <= stup_num2; j++)
                            {
                                if (i == red_num2 && j == stup_num2)
                                    mlin_polje[i][j] = 'X';
                            }
                        }

                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    else
                    {
                        printf("Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                        goto povratak_drugiigrac;
                    }
                }
                if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                {
                    countO--;
                    count1--;
                    printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                povratak_mlin2:
                    scanf(" %c,%c", &red2, &stup2);
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak_mlin2;
                    else
                    {
                        switch_case2(red_num2, red2, stup2, stup_num2);
                        if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak_mlin2;
                        }
                        if (mlin_polje[red_num2][stup_num2] == 'O')
                        {
                            for (int i = 2; i <= red_num2; i++)
                            {
                                for (int j = 2; j <= stup_num2; j++)
                                {
                                    if (i == red_num2 && j == stup_num2)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                        else
                        {
                            printf("Odabrali ste svoju figuru ili ste odabrali prazno mjesto!\nMolimo odaberite mjesto gdje se nalaze protivnicke figure!\n");
                            goto povratak_mlin2;
                        }
                    }
                }
                count++;
            }

            while (countO > 2 || countX > 2)
            {
                if (countO == 3 || countX == 3)
                {
                    printf("Počinje 3. faza igre!");
                povratak1:
                    printf("1. igrac odaberite figuricu kojom se zelite micati:\n");
                    scanf(" %c,%c", &red1, &stup1);
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak1;
                    else
                    {
                        switch_case1(red_num1, red1, stup1, stup_num1);
                        if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak1;
                        }

                        for (int i = 2; i <= red_num1; i++)
                        {
                            for (int j = 2; j <= stup_num1; j++)
                            {
                                if (i == red_num1 && j == stup_num1)
                                    mlin_polje[i][j] = ' ';
                            }
                        }
                    }
                povratak2:
                    printf("1. igrac odaberite poziciju gdje se zelite pomaknuti:\n");
                    scanf(" %c,%c", &red1, &stup1);
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak2;
                    else
                    {
                        switch_case1(red_num1, red1, stup1, stup_num1);
                        if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak2;
                        }
                        if (mlin_polje[red_num1][stup_num1] == ' ')
                        {
                            for (int i = 2; i <= red_num1; i++)
                            {
                                for (int j = 2; j <= stup_num1; j++)
                                {
                                    if (i == red_num1 && j == stup_num1)
                                        mlin_polje[i][j] = 'O';
                                }
                            }
                        }
                        else
                        {
                            printf("Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                            goto povratak2;
                        }
                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                    {
                        countX--;
                        count1--;
                        printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                    povratak3:
                        scanf(" %c,%c", &red1, &stup1);
                        if (provjera_tocnosti1(red1, stup1))
                        {
                            goto povratak3;
                        }
                        else
                        {
                            switch_case1(red_num1, red1, stup1, stup_num1);
                            if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                            {
                                printf("Unijeli ste pogresni broj!\n");
                            }
                            if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                            {
                                printf("Unijeli ste pogresno slovo!\n");
                                goto povratak3;
                            }

                            for (int i = 2; i <= red_num1; i++)
                            {
                                for (int j = 2; j <= stup_num1; j++)
                                {
                                    if (i == red_num1 && j == stup_num1)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                    }
                povratak4:
                    printf("2. igrac odaberite figuricu kojom se zelite micati:\n");
                    scanf(" %c,%c", &red2, &stup2);
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak4;
                    else
                    {
                        switch_case2(red_num2, red2, stup2, stup_num2);
                        if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak4;
                        }
                        for (int i = 2; i <= red_num2; i++)
                        {
                            for (int j = 2; j <= stup_num2; j++)
                            {
                                if (i == red_num2 && j == stup_num2)
                                    mlin_polje[i][j] = ' ';
                            }
                        }
                    }
                povratak5:
                    printf("2. igrac odaberite poziciju gdje se zelite pomaknuti:\n");
                    scanf(" %c,%c", &red2, &stup2);
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak5;
                    else
                    {
                        switch_case2(red_num2, red2, stup2, stup_num2);
                        if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak5;
                        }
                        if (mlin_polje[red_num2][stup_num2] == ' ')
                        {
                            for (int i = 2; i <= red_num2; i++)
                            {
                                for (int j = 2; j <= stup_num2; j++)
                                {
                                    if (i == red_num2 && j == stup_num2)
                                        mlin_polje[i][j] = 'X';
                                }
                            }
                        }
                        else
                        {
                            printf("Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                            goto povratak5;
                        }
                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                    {
                        countO--;
                        count1--;
                        printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                    povratak6:
                        scanf(" %c,%c", &red2, &stup2);
                        if (provjera_tocnosti2(red2, stup2))
                            goto povratak6;
                        else
                        {
                            switch_case2(red_num2, red2, stup2, stup_num2);
                            if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                            {
                                printf("Unijeli ste pogresni broj!\n");
                            }
                            if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                            {
                                printf("Unijeli ste pogresno slovo!\n");
                                goto povratak6;
                            }
                            for (int i = 2; i <= red_num2; i++)
                            {
                                for (int j = 2; j <= stup_num2; j++)
                                {
                                    if (i == red_num2 && j == stup_num2)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                    }
                    if (countO > 2)
                    {
                        printf("1. igrac je pobjednik!\n");
                        break;
                    }
                    else
                    {
                        printf("2. igrac je pobjednik!\n");
                    }
                }
                else
                {
                povratak7:
                    printf("1. igrac odaberite figuricu kojom se zelite micati:\n");
                    scanf(" %c,%c", &red1, &stup1);
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak7;
                    else
                    {
                        switch_case1(red_num1, red1, stup1, stup_num1);
                        if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak7;
                        }
                        for (int i = 2; i <= red_num1; i++)
                        {
                            for (int j = 2; j <= stup_num1; j++)
                            {
                                if (i == red_num1 && j == stup_num1)
                                    mlin_polje[i][j] = ' ';
                            }
                        }
                    }
                povratak8:
                    printf("1. igrac odaberite poziciju gdje se zelite pomaknuti:\n");
                    scanf(" %c,%c", &red1, &stup1);
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak8;
                    else
                    {
                        switch_case1(red_num1, red1, stup1, stup_num1);
                        if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak8;
                        }
                        if (mlin_polje[red_num1][stup_num1] == ' ')
                        {
                            for (int i = 2; i <= red_num1; i++)
                            {
                                for (int j = 2; j <= stup_num1; j++)
                                {
                                    if (i == red_num1 && j == stup_num1)
                                        mlin_polje[i][j] = 'O';
                                }
                            }
                        }
                        else
                        {
                            printf("Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                            goto povratak8;
                        }
                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                    {
                        countX--;
                        count1--;
                        printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                    povratak9:
                        scanf(" %c,%c", &red1, &stup1);
                        if (provjera_tocnosti1(red1, stup1))
                        {
                            goto povratak9;
                        }
                        else
                        {
                            switch_case1(red_num1, red1, stup1, stup_num1);
                            if (red1 != 1 || red1 != 2 || red1 != 3 || red1 != 4 || red1 != 5 || red1 != 6 || red1 != 7)
                            {
                                printf("Unijeli ste pogresni broj!\n");
                            }
                            if (stup1 != 'a' || stup1 != 'b' || stup1 != 'c' || stup1 != 'd' || stup1 != 'e' || stup1 != 'f' || stup1 != 'g')
                            {
                                printf("Unijeli ste pogresno slovo!\n");
                                goto povratak9;
                            }
                            for (int i = 2; i <= red_num1; i++)
                            {
                                for (int j = 2; j <= stup_num1; j++)
                                {
                                    if (i == red_num1 && j == stup_num1)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                    }
                povratak10:
                    printf("2. igrac odaberite figuricu kojom se zelite micati:\n");
                    scanf(" %c,%c", &red2, &stup2);
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak10;
                    else
                    {
                        switch_case2(red_num2, red2, stup2, stup_num2);
                        if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak10;
                        }
                        for (int i = 2; i <= red_num2; i++)
                        {
                            for (int j = 2; j <= stup_num2; j++)
                            {
                                if (i == red_num2 && j == stup_num2)
                                    mlin_polje[i][j] = ' ';
                            }
                        }
                    }
                povratak11:
                    printf("2. igrac odaberite poziciju gdje se zelite pomaknuti:\n");
                    scanf(" %c,%c", &red2, &stup2);
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak11;
                    else
                    {
                        switch_case2(red_num2, red2, stup2, stup_num2);
                        if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                        {
                            printf("Unijeli ste pogresni broj!\n");
                        }
                        if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                        {
                            printf("Unijeli ste pogresno slovo!\n");
                            goto povratak11;
                        }
                        if (mlin_polje[red_num2][stup_num2] == ' ')
                        {
                            for (int i = 2; i <= red_num2; i++)
                            {
                                for (int j = 2; j <= stup_num2; j++)
                                {
                                    if (i == red_num2 && j == stup_num2)
                                        mlin_polje[i][j] = 'X';
                                }
                            }
                        }
                        else
                        {
                            printf("Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n");
                            goto povratak11;
                        }
                        system("cls");
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                printf(" %c", mlin_polje[i][j]);
                            printf("\n");
                        }
                    }
                    if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                    {
                        countO--;
                        count1--;
                        printf("Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n");
                    povratak12:
                        scanf(" %c,%c", &red2, &stup2);
                        if (provjera_tocnosti2(red2, stup2))
                            goto povratak12;
                        else
                        {
                            switch_case2(red_num2, red2, stup2, stup_num2);
                            if (red2 != 1 || red2 != 2 || red2 != 3 || red2 != 4 || red2 != 5 || red2 != 6 || red2 != 7)
                            {
                                printf("Unijeli ste pogresni broj!\n");
                            }
                            if (stup2 != 'a' || stup2 != 'b' || stup2 != 'c' || stup2 != 'd' || stup2 != 'e' || stup2 != 'f' || stup2 != 'g')
                            {
                                printf("Unijeli ste pogresno slovo!\n");
                                goto povratak12;
                            }
                            for (int i = 2; i <= red_num2; i++)
                            {
                                for (int j = 2; j <= stup_num2; j++)
                                {
                                    if (i == red_num2 && j == stup_num2)
                                        mlin_polje[i][j] = ' ';
                                }
                            }
                            system("cls");
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    printf(" %c", mlin_polje[i][j]);
                                printf("\n");
                            }
                        }
                    }
                }
            }
        }
        else if (izbor == 2)
        {
            system("cls");
            printf("1.\n");
            printf("Na samom početku igre, igrača ploča je prazna.\n");
            printf("Prvo crni, a zatim naizmjenično, igrači postavljaju po jednu figuricu na slobodnu, presječnu točku.\n");
            printf("U ovoj fazi igre, postavljaju se uvijek nove figure, a one na ploči se još uvijek ne smiju pomicati.\n");
            printf("Ako igrač u ovoj fazi formira \"mlin\", odmah uklanja jednu protivničku figuru s ploče.\n");
            printf("Kad se nakon 9 poteza (9 figura) , sve figure uvedu u igru, prelazi se na sljedeću fazu.\n");
            printf("\n");
            printf("2.\n");
            printf("Igrači naizmjenično pomiču po jednu svoju figuru, duž linija, do susjedne točke.\n");
            printf("U ovoj fazi, može se pomaknuti jedna figura iz formiranog \"mlina\", a u sljedećem potezu vratiti, formirati ponovo i iznova ukloniti protivničku figuru.\n");
            printf("Za rasformiranje formiranog \"mlina\", koristi se termin \"otvaranje\", a za ponovno njeno formiranje, termin \"zatvaranje\".");
            printf("Čim igrač ostane na tri figure, samo on ulazi u treću fazu igre.\n");
            printf("\n");
            printf("3.\n");
            printf("Igrač koji ostane s tri figure, ima pravo bilo koju od njih prebaciti na bilo koje slobodno polje.\n");
            printf("Ako u međuvremenu i protivnik ostane sa tri figure, i on tog trenutka ulazi u 3. fazu igre.\n");
            printf("Znači, i njegove figure sada mogu skakati od polja do polja, bez obzira na linije spajanja.\n");
            printf("Partija \"mlina\" se u drugoj fazi igre može i završiti \"blokiranjem\". Ako bilo tko, na svom potezu, nema što odigrati - gubi partiju.");
        }
        else if (izbor == 3)
        {
            system("cls");
            printf("Gasenje programa...\n");
            break;
        }
        else
            printf("Pogresan unos!");
        printf("\n\nStisnite Enter za nastavak...");
        getchar();
        getchar();
    }
    return 0;
}
// https://www.w3.org/TR/xml-entity-names/026.html