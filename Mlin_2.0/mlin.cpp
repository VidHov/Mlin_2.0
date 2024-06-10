#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

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
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '1' && stup1 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '1' && stup1 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '1' && stup1 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '2' && stup1 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '2' && stup1 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '2' && stup1 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '2' && stup1 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '3' && stup1 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '3' && stup1 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '3' && stup1 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '3' && stup1 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '4' && stup1 == 'd')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '5' && stup1 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '5' && stup1 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '5' && stup1 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '5' && stup1 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '6' && stup1 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '6' && stup1 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '6' && stup1 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '6' && stup1 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red1 == '7' && stup1 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '7' && stup1 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '7' && stup1 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red1 == '7' && stup1 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    return 0;
}

int provjera_tocnosti2(int red2, int stup2)
{
    if (red2 == '1' && stup2 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '1' && stup2 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
        ;
    }
    if (red2 == '1' && stup2 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '1' && stup2 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '2' && stup2 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '2' && stup2 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '2' && stup2 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '2' && stup2 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '3' && stup2 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '3' && stup2 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '3' && stup2 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '3' && stup2 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '4' && stup2 == 'd')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '5' && stup2 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '5' && stup2 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '5' && stup2 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '5' && stup2 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '6' && stup2 == 'a')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '6' && stup2 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '6' && stup2 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '6' && stup2 == 'g')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }

    if (red2 == '7' && stup2 == 'b')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '7' && stup2 == 'c')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '7' && stup2 == 'e')
    {
        cout << "Pogresne koordinate" << endl;
        return 1;
    }
    if (red2 == '7' && stup2 == 'f')
    {
        cout << "Pogresne koordinate" << endl;
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
void switch_case1(int *red_num1, char red1, char stup1, int *stup_num1)
{
    switch (red1)
    {
    case '1':
        *red_num1 = 2;
        break;

    case '2':
        *red_num1 = 4;
        break;

    case '3':
        *red_num1 = 6;
        break;

    case '4':
        *red_num1 = 8;
        break;

    case '5':
        *red_num1 = 10;
        break;

    case '6':
        *red_num1 = 12;
        break;

    case '7':
        *red_num1 = 14;
        break;
    }
    switch (stup1)
    {
    case 'a':
        *stup_num1 = 2;
        break;

    case 'b':
        *stup_num1 = 4;
        break;

    case 'c':
        *stup_num1 = 6;
        break;

    case 'd':
        *stup_num1 = 8;
        break;

    case 'e':
        *stup_num1 = 10;
        break;

    case 'f':
        *stup_num1 = 12;
        break;

    case 'g':
        *stup_num1 = 14;
        break;
    }
}
void switch_case2(int *red_num2, char red2, char stup2, int *stup_num2)
{
    switch (red2)
    {
    case '1':
        *red_num2 = 2;
        break;

    case '2':
        *red_num2 = 4;
        break;

    case '3':
        *red_num2 = 6;
        break;

    case '4':
        *red_num2 = 8;
        break;

    case '5':
        *red_num2 = 10;
        break;

    case '6':
        *red_num2 = 12;
        break;

    case '7':
        *red_num2 = 14;
        break;
    }

    switch (stup2)
    {
    case 'a':
        *stup_num2 = 2;
        break;

    case 'b':
        *stup_num2 = 4;
        break;

    case 'c':
        *stup_num2 = 6;
        break;

    case 'd':
        *stup_num2 = 8;
        break;

    case 'e':
        *stup_num2 = 10;
        break;

    case 'f':
        *stup_num2 = 12;
        break;

    case 'g':
        *stup_num2 = 14;
        break;
    }
}

struct User
{
    char username[50];
    char password[50];
};

void signUp()
{
    User newUser;

    cout << "Unesite korisnicko ime: ";
    cin >> newUser.username;
    cout << "Unesite lozinku: ";
    cin >> newUser.password;

    ofstream outFile("Korisnici.dat", ios::binary | ios::app);
    if (!outFile)
    {
        cerr << "File could not be opened!" << endl;
        return;
    }

    outFile.write(reinterpret_cast<char *>(&newUser), sizeof(User));
    outFile.close();

    cout << "User registered successfully!" << endl;
}

bool login()
{
    User existingUser;
    char username[50];
    char password[50];

    cout << "Unesite korisnicko ime: ";
    cin >> username;
    cout << "Unesite lozinku: ";
    cin >> password;

    ifstream inFile("Korisnici.dat", ios::binary);
    if (!inFile)
    {
        cerr << "File could not be opened!" << endl;
        return false;
    }

    while (inFile.read(reinterpret_cast<char *>(&existingUser), sizeof(User)))
    {
        if (strcmp(existingUser.username, username) == 0 && strcmp(existingUser.password, password) == 0)
        {
            cout << "Login successful!" << endl;
            inFile.close();
            return true;
        }
    }

    inFile.close();
    cout << "Invalid username or password!" << endl;
    return false;
}

int main()
{
    int izbor;
    while (1)
    {
        cout << "  _____ _                              _                              _     \n";
        cout << " /__   \\ |__   ___     /\\/\\   ___ _ __( )__     /\\/\\   ___  _ __ _ __(_)___ \n";
        cout << "   / /\\/ '_ \\ / _ \\   /    \\ / _ \\ '_ \\/ __|   /    \\ / _ \\| '__| '__| / __|\n";
        cout << "  / /  | | | |  __/  / /\\/\\ \\  __/ | | \\__ \\  / /\\/\\ \\ (_) | |  | |  | \\__ \\\n";
        cout << "  \\/   |_| |_|\\___|  \\/    \\/\\___|_| |_|___/  \\/    \\/\\___/|_|  |_|  |_|___/\n\n\n";
        cout << "Unesite broj zeljenog odabira:\n";
        cout << "1. Start\n";
        cout << "2. Rules\n";
        cout << "3. Exit\n";
        cout << "4. Log in\n";
        cout << "5. Sign up\n";
        cin >> izbor;
        if (izbor == 1)
        {
            int countX = 9, countO = 9;
            int count1 = 9;
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
                    cout << " " <<mlin_polje[i][j];
                cout << "\n";
            }
            cout << "\n";
            char red1, stup1, red2, stup2;
            int red_num1, stup_num1, red_num2, stup_num2, count = 1;
            printf("Prvo unesite koordinate redaka pa onda stupaca!(N,x)\n");
            while (count <= 9)
            {
            povratak_prviigrac:
                cout << "1. igrac:\n";
                cin >> red1 >> stup1;
                if (provjera_tocnosti1(red1, stup1))
                {
                    goto povratak_prviigrac;
                }
                else
                {
                    switch_case1(&red_num1, red1, stup1, &stup_num1);
                    if (red1 < '1' || red1 > '7')
                    {
                        cout << "Unijeli ste pogresni broj!\n";
                    }
                    if (stup1 < 'a' || stup1 > 'g')
                    {
                        cout << "Unijeli ste pogresno slovo!\n";
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
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauseta!\n";
                        goto povratak_prviigrac;
                    }
                }
                if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                {
                    countX--;
                    count1--;
                    cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                povratak_mlin1:
                    cin >> red1 >> stup1;
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak_mlin1;
                    else
                    {
                        switch_case1(&red_num1, red1, stup1, &stup_num1);
                        if (red1 < '1' || red1 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup1 < 'a' || stup1 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << endl;
                            }
                        }
                        else
                        {
                            cout << "Odabrali ste svoju figuru ili ste odabrali prazno mjesto!\nMolimo odaberite mjesto gdje se nalaze protivnicke figure!\n";
                            goto povratak_mlin1;
                        }
                    }
                }
            povratak_drugiigrac:
                cout << "2. igrac:\n";
                cin >> red2 >> stup2;
                if (provjera_tocnosti2(red2, stup2))
                    goto povratak_drugiigrac;
                else
                {
                    switch_case2(&red_num2, red2, stup2, &stup_num2);
                    if (red2 < '1' || red2 > '7')
                    {
                        cout << "Unijeli ste pogresni broj!\n";
                    }
                    if (stup2 < 'a' || stup2 > 'g')
                    {
                        cout << "Unijeli ste pogresno slovo!\n";
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
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << "\n";
                        }
                    }
                    else
                    {
                        cout << "Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauzeta!\n";
                        goto povratak_drugiigrac;
                    }
                }
                if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                {
                    countO--;
                    count1--;
                    cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                povratak_mlin2:
                    cin >> red2 >> stup2;
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak_mlin2;
                    else
                    {
                        switch_case2(&red_num2, red2, stup2, &stup_num2);
                        if (red2 < '1' || red2 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup2 < 'a' || stup2 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << "\n";
                            }
                        }
                        else
                        {
                            cout << "Odabrali ste svoju figuru ili ste odabrali prazno mjesto!\nMolimo odaberite mjesto gdje se nalaze protivnicke figure!\n";
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
                    cout << "Počinje 3. faza igre!";
                povratak1:
                    cout << "1. igrac odaberite figuricu kojom se zelite micati:\n";
                    cin >> red1 >> stup1;
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak1;
                    else
                    {
                        switch_case1(&red_num1, red1, stup1, &stup_num1);
                        if (red1 < '1' || red1 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup1 < 'a' || stup1 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo\n";
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
                    cout << "1. igrac odaberite poziciju gdje se zelite pomaknuti:\n";
                    cin >> red1 >> stup1;
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak2;
                    else
                    {
                        switch_case1(&red_num1, red1, stup1, &stup_num1);
                        if (red1 < '1' || red1 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup1 < 'a' || stup1 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            cout << "Mjesto koje ste odabrali nije slobodno!\nMolimo unesite samo mjesta koja nisu zauseta!\n";
                            goto povratak2;
                        }

                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << endl;
                        }
                    }
                    if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                    {
                        countX--;
                        count1--;
                        cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                    povratak3:
                        cin >> red1 >> stup1;
                        if (provjera_tocnosti1(red1, stup1))
                        {
                            goto povratak3;
                        }
                        else
                        {
                            switch_case1(&red_num1, red1, stup1, &stup_num1);
                            if (red1 < '1' || red1 > '7')
                            {
                                cout << "Unijeli ste pogresni broj!\n";
                            }
                            if (stup1 < 'a' || stup1 > 'g')
                            {
                                cout << "Unijeli ste pogresn slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << endl;
                            }
                        }
                    }
                povratak4:
                    cout << "2. igrac odaberite figuricu kojom se zelite micati:\n";
                    cin >> red2 >> stup2;
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak4;
                    else
                    {
                        switch_case2(&red_num2, red2, stup2, &stup_num2);
                        if (red2 < '1' || red2 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup2 < 'a' || stup2 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                    cout << "2. igrac odaberite poziciju gdje se zelite pomaknuti:\n";
                    cin >> red2 >> stup2;
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak5;
                    else
                    {
                        switch_case2(&red_num2, red2, stup2, &stup_num2);
                        if (red2 < '1' || red2 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup2 < 'a' || stup2 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            cout << "Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n";
                            goto povratak5;
                        }
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << endl;
                        }
                    }
                    if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                    {
                        countO--;
                        count1--;
                        cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                    povratak6:
                        cin >> red2 >> stup2;
                        if (provjera_tocnosti2(red2, stup2))
                            goto povratak6;
                        else
                        {
                            switch_case2(&red_num2, red2, stup2, &stup_num2);
                            if (red2 < '1' || red2 > '7')
                            {
                                cout << "Unijeli ste pogresni broj!\n";
                            }
                            if (stup2 < 'a' || stup2 > 'g')
                            {
                                cout << "Unijeli ste pogresn slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << endl;
                            }
                        }
                    }
                    if (countO > 2)
                    {
                        cout << "1. igrac je pobjednik!\n";
                        break;
                    }
                    else
                    {
                        cout << "2. igrac je pobjednik!\n";
                    }
                }
                else
                {
                povratak7:
                    cout << "1. igrac odaberite figuricu kojom se zelite micati:\n";
                    cin >> red1 >> stup1;
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak7;
                    else
                    {
                        switch_case1(&red_num1, red1, stup1, &stup_num1);
                        if (red1 < '1' || red1 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup1 < 'a' || stup1 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                    cout << "1. igrac odaberite poziciju gdje se zelite pomaknuti:\n";
                    cin >> red1 >> stup1;
                    if (provjera_tocnosti1(red1, stup1))
                        goto povratak8;
                    else
                    {
                        switch_case1(&red_num1, red1, stup1, &stup_num1);
                        if (red1 < '1' || red1 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup1 < 'a' || stup1 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            cout << "Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n";
                            goto povratak8;
                        }
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << endl;
                        }
                    }
                    if (provjera_mlina1(mlin_polje, red_num1, stup_num1))
                    {
                        countX--;
                        count1--;
                        cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                    povratak9:
                        cin >> red1 >> stup1;
                        if (provjera_tocnosti1(red1, stup1))
                        {
                            goto povratak9;
                        }
                        else
                        {
                            switch_case1(&red_num1, red1, stup1, &stup_num1);
                            if (red1 < '1' || red1 > '7')
                            {
                                cout << "Unijeli ste pogresni broj!\n";
                            }
                            if (stup1 < 'a' || stup1 > 'g')
                            {
                                cout << "Unijeli ste pogresno slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << endl;
                            }
                        }
                    }
                povratak10:
                    cout << "2. igrac odaberite figuricu kojom se zelite micati:\n";
                    cin >> red2 >> stup2;
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak10;
                    else
                    {
                        switch_case2(&red_num2, red2, stup2, &stup_num2);
                        if (red2 < '1' || red2 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup2 < 'a' || stup2 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                    cout << "2. igrac odaberite poziciju gdje se zelite pomaknuti:\n";
                    cin >> red2 >> stup2;
                    if (provjera_tocnosti2(red2, stup2))
                        goto povratak11;
                    else
                    {
                        switch_case2(&red_num2, red2, stup2, &stup_num2);
                        if (red2 < '1' || red2 > '7')
                        {
                            cout << "Unijeli ste pogresni broj!\n";
                        }
                        if (stup2 < 'a' || stup2 > 'g')
                        {
                            cout << "Unijeli ste pogresno slovo!\n";
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
                            cout << "Mjesto koje ste odabrali nije slobodno ili ste upisali pogresne koordinate!\nMolimo unesite samo mjesta koja nisu zauseta!\n";
                            goto povratak11;
                        }
                        for (int i = 0; i < 16; i++)
                        {
                            for (int j = 0; j < 16; j++)
                                cout << mlin_polje[i][j];
                            cout << endl;
                        }
                    }
                    if (provjera_mlina2(mlin_polje, red_num2, stup_num2))
                    {
                        countO--;
                        count1--;
                        cout << "Stvorili ste mlin!\nOdaberite jednu protivnikovu figuru koju zelite otkloniti!\n";
                    povratak12:
                        cin >> red2 >> stup2;
                        if (provjera_tocnosti2(red2, stup2))
                            goto povratak12;
                        else
                        {
                            switch_case2(&red_num2, red2, stup2, &stup_num2);
                            if (red2 < '1' || red2 > '7')
                            {
                                cout << "Unijeli ste pogresni broj!\n";
                            }
                            if (stup2 < 'a' || stup2 > 'g')
                            {
                                cout << "Unijeli ste pogresno slovo!\n";
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
                            for (int i = 0; i < 16; i++)
                            {
                                for (int j = 0; j < 16; j++)
                                    cout << mlin_polje[i][j];
                                cout << endl;
                            }
                        }
                    }
                }
            }
        }
        else if (izbor == 2)
        {
            cout << "1.\n";
            cout << "Na samom početku igre, igrača ploča je prazna.\n";
            cout << "Prvo crni, a zatim naizmjenično, igrači postavljaju po jednu figuricu na slobodnu, presječnu točku.\n";
            cout << "U ovoj fazi igre, postavljaju se uvijek nove figure, a one na ploči se još uvijek ne smiju pomicati.\n";
            cout << "Ako igrač u ovoj fazi formira \"mlin\", odmah uklanja jednu protivničku figuru s ploče.\n";
            cout << "Kad se nakon 9 poteza (9 figura) , sve figure uvedu u igru, prelazi se na sljedeću fazu.\n";
            cout << "\n";
            cout << "2.\n";
            cout << "Igrači naizmjenično pomiču po jednu svoju figuru, duž linija, do susjedne točke.\n";
            cout << "U ovoj fazi, može se pomaknuti jedna figura iz formiranog \"mlina\", a u sljedećem potezu vratiti, formirati ponovo i iznova ukloniti protivničku figuru.\n";
            cout << "Za rasformiranje formiranog \"mlina\", koristi se termin \"otvaranje\", a za ponovno njeno formiranje, termin \"zatvaranje\".\n";
            cout << "Čim igrač ostane na tri figure, samo on ulazi u treću fazu igre.\n";
            cout << "\n";
            cout << "3.\n";
            cout << "Igrač koji ostane s tri figure, ima pravo bilo koju od njih prebaciti na bilo koje slobodno polje.\n";
            cout << "Ako u međuvremenu i protivnik ostane sa tri figure, i on tog trenutka ulazi u 3. fazu igre.\n";
            cout << "Znači, i njegove figure sada mogu skakati od polja do polja, bez obzira na linije spajanja.\n";
            cout << "Partija \"mlina\" se u drugoj fazi igre može i završiti \"blokiranjem\". Ako bilo tko, na svom potezu, nema što odigrati - gubi partiju.\n";
        }
        else if (izbor == 3)
        {
            cout << "Gasenje programa...\n";
            break;
        }
        else if (izbor == 4)
        {
            login();
        }
        else if (izbor == 5)
        {
            signUp();
        }
        else
            cout << "Pogresan unos!";
        cout << "\n\nStisnite Enter za nastavak...";
        getchar();
        getchar();
    }
    return 0;
}
// https://www.w3.org/TR/xml-entity-names/026.html