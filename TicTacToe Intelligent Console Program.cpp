//TicTacToe Intelligent Console Program

#include <bits/stdc++.h>


char board[3][3] =
{
    {' ', ' ', ' '},
    {' ', ' ', ' '},
    {' ', ' ', ' '},
};

void display()
{
    system("clear");

    int row;

    printf("\n\t-----\tTicTacToe Intelligent Console Program\t-----");
	printf("\n\t-----\tDeveloped by Khaled Hasan Rony\t\t-----\n\n\n\n");

    for( row = 0; row < 3; row++ )
    {
        printf("\t\t\t %c | %c | %c ", board[row][0], board[row][1], board[row][2]);

        if( row != 2 )
        {
            printf("\n\t\t\t---|---|---\n");
        }
    }

    printf("\n\n\n");
}

bool checkInput(int row, int column)
{
    if( row < 0 || row > 2 )
    {
        return false;
    }
    if( column < 0 || column > 2 )
    {
        return false;
    }

    if( board[row][column] != ' ' )
    {
        return false;
    }

    return true;
}

void inputFromUser()
{
    int row, column;

    printf("\nEnter row and column: ");

    while(1)
    {
        fflush(stdin);
        scanf("%d %d", &row, &column);

        row--;
        column--;

        if( checkInput(row, column) )
        {
            board[row][column] = 'X';

            return;
        }
        else
        {
            display();

            printf("\nInvalid input");

            printf("\nEnter row and column: ");
        }
    }
}

void randomInput()
{
    int row, column;

    srand(time(NULL));

    while(1)
    {
        row = (rand() % 3);
        column = (rand() % 3);

        if( checkInput(row, column) )
        {
            board[row][column] = 'O';

            return;
        }
	}
}

bool find_AI_input(int row, int column, char ch)
{
    if( row == 0 && column == 0 )
    {
        if( board[0][1] == ch && board[0][2] == ' ' )
        {
            board[0][2] = 'O';

            return true;
        }
        if( board[0][1] == ' ' && board[0][2] == ch )
        {
            board[0][1] = 'O';

            return true;
        }

        if( board[1][1] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[1][1] == ' ' && board[2][2] == ch )
        {
            board[1][1] = 'O';

            return true;
        }

        if( board[1][0] == ch && board[2][0] == ' ' )
        {
            board[2][0] = 'O';

            return true;
        }
        if( board[1][0] == ' ' && board[2][0] == ch )
        {
            board[1][0] = 'O';

            return true;
        }
    }

    if( row == 0 && column == 1 )
    {
        if( board[0][0] == ch && board[0][2] == ' ' )
        {
            board[0][2] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[0][2] == ch )
        {
            board[0][0] = 'O';

            return true;
        }

        if( board[1][1] == ch && board[2][1] == ' ' )
        {
            board[2][1] = 'O';

            return true;
        }
        if( board[1][1] == ' ' && board[2][1] == ch )
        {
            board[1][1] = 'O';

            return true;
        }
    }

    if( row == 0 && column == 2 )
    {
        if( board[0][0] == ch && board[0][1] == ' ' )
        {
            board[0][1] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[0][1] == ch )
        {
            board[0][0] = 'O';

				return true;
        }

        if( board[2][0] == ch && board[1][1] == ' ' )
        {
            board[1][1] = 'O';

            return true;
        }
        if( board[2][0] == ' ' && board[1][1] == ch )
        {
            board[2][0] = 'O';

            return true;
        }

        if( board[1][2] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[1][2] == ' ' && board[2][2] == ch )
        {
            board[1][2] = 'O';

            return true;
        }
    }

    if( row == 1 && column == 0 )
    {
        if( board[0][0] == ch && board[2][0] == ' ' )
        {
            board[2][0] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[2][0] == ch )
        {
            board[0][0] = 'O';

            return true;
        }

        if( board[1][1] == ch && board[1][2] == ' ' )
        {
            board[1][2] = 'O';

            return true;
        }
        if( board[1][1] == ' ' && board[1][2] == ch )
        {
            board[1][1] = 'O';

            return true;
        }
    }

    if( row == 1 && column == 1 )
    {
        if( board[1][0] == ch && board[1][2] == ' ' )
        {
            board[1][2] = 'O';

            return true;
        }
        if( board[1][0] == ' ' && board[1][2] == ch )
        {
            board[1][0] = 'O';

            return true;
        }

        if( board[0][0] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[2][2] == ch )
        {
            board[0][0] = 'O';

            return true;
        }

        if( board[0][1] == ch && board[2][1] == ' ' )
        {
            board[2][1] = 'O';

            return true;
        }
        if( board[0][1] == ' ' && board[2][1] == ch )
        {
            board[0][1] = 'O';

            return true;
        }

        if( board[0][2] == ch && board[2][0] == ' ' )
        {
            board[2][0] = 'O';

            return true;
        }
        if( board[0][2] == ' ' && board[2][0] == ch )
        {
            board[0][2] = 'O';

            return true;
        }
    }

    if( row == 1 && column == 2 )
    {
        if( board[1][0] == ch && board[1][1] == ' ' )
        {
            board[1][1] = 'O';

            return true;
        }
        if( board[1][0] == ' ' && board[1][1] == ch )
        {
            board[1][0] = 'O';

            return true;
        }

        if( board[0][2] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[0][2] == ' ' && board[2][2] == ch )
        {
            board[0][2] = 'O';

            return true;
        }
    }

    if( row == 2 && column == 0 )
    {
        if( board[0][0] == ch && board[1][0] == ' ' )
        {
            board[1][0] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[1][0] == ch )
        {
            board[0][0] = 'O';

            return true;
        }

        if( board[1][1] == ch && board[0][2] == ' ' )
        {
            board[0][2] = 'O';

            return true;
        }
        if( board[1][1] == ' ' && board[0][2] == ch )
        {
            board[1][1] = 'O';

            return true;
        }

        if( board[2][1] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[2][1] == ' ' && board[2][2] == ch )
        {
            board[2][1] = 'O';

            return true;
        }
    }

    if( row == 2 && column == 1 )
    {
        if( board[2][0] == ch && board[2][2] == ' ' )
        {
            board[2][2] = 'O';

            return true;
        }
        if( board[2][0] == ' ' && board[2][2] == ch )
        {
            board[2][0] = 'O';

            return true;
        }

        if( board[0][1] == ch && board[1][1] == ' ' )
        {
            board[1][1] = 'O';

            return true;
        }
        if( board[0][1] == ' ' && board[1][1] == ch )
        {
            board[0][1] = 'O';

            return true;
        }
    }

    if( row == 2 && column == 2 )
    {
        if( board[2][0] == ch && board[2][1] == ' ' )
        {
            board[2][1] = 'O';

            return true;
        }
        if( board[2][0] == ' ' && board[2][1] == ch )
        {
            board[2][0] = 'O';

            return true;
        }

        if( board[0][0] == ch && board[1][1] == ' ' )
        {
            board[1][1] = 'O';

            return true;
        }
        if( board[0][0] == ' ' && board[1][1] == ch )
        {
            board[0][0] = 'O';

            return true;
        }

        if( board[0][2] == ch && board[1][2] == ' ' )
        {
            board[1][2] = 'O';

            return true;
        }
        if( board[0][2] == ' ' && board[1][2] == ch )
        {
            board[0][2] = 'O';

            return true;
        }
    }

    //end of 9 if conditions

    return false;
}

void inputAI()
{
    int row, column;

    if( checkInput(1, 1) )
    {
        board[1][1] = 'O';

        return;
    }

    for( row = 0; row < 3; row++ )
    {
        for( column = 0; column < 3; column++ )
        {
            if( board[row][column] == 'X' && find_AI_input(row, column, 'X') )
            {
                return;
            }
        }
    }

    for( row = 0; row < 3; row++ )
    {
        for( column = 0; column < 3; column++ )
        {
            if( board[row][column] == 'O' && find_AI_input(row, column, 'O') )
            {
                return;
            }
        }
    }

    randomInput();

    return;
}

void delay(double n)
{
    double start, stop;

    start = clock();

    stop = start + (1000 * n);

    while( clock() < stop )
    {
        //
    }
}

void delayModified()
{
    double i = 0;
    double number = 300000000;

    for( i = 0; i < number; i++ )
    {
        //
    }
}

bool check(char ch)
{
    if( ch == board[0][0] && ch == board[0][1] && ch == board[0][2] )
    {
        return true;
    }
    if( ch == board[0][0] && ch == board[1][1] && ch == board[2][2] )
    {
        return true;
    }
    if( ch == board[0][0] && ch == board[1][0] && ch == board[2][0] )
    {
        return true;
    }
    if( ch == board[0][1] && ch == board[1][1] && ch == board[2][1] )
    {
        return true;
    }
    if( ch == board[0][2] && ch == board[1][2] && ch == board[2][2] )
    {
        return true;
    }
    if( ch == board[0][2] && ch == board[1][1] && ch == board[2][0] )
    {
        return true;
    }
    if( ch == board[1][0] && ch == board[1][1] && ch == board[1][2] )
    {
        return true;
    }
    if( ch == board[2][0] && ch == board[2][1] && ch == board[2][2] )
    {
        return true;
    }

    return false;
}

bool gameDrawCheck()
{
    if( board[0][0] == ' ' || board[0][1] == ' ' || board[0][2] == ' ' )
    {
        return false;
    }
    if( board[1][0] == ' ' || board[1][1] == ' ' || board[1][2] == ' ' )
    {
        return false;
    }
    if( board[2][0] == ' ' || board[2][1] == ' ' || board[2][2] == ' ' )
    {
        return false;
    }

    return true;
}


int main()
{
    while(1)
    {
        display();

        inputFromUser();

        display();

        if( check('X') )
        {
            delayModified();

            printf("User wins !!\t\n");

            return 0;
        }

        delayModified();

        if( gameDrawCheck() )
        {
            printf("Game draw !!\t\n");

            return 0;
        }

        inputAI();

        display();

        if( check('O') )
        {
            delayModified();

            printf("Computer wins !!\t\n");

            return 0;
        }

        delayModified();

        if( gameDrawCheck() )
        {
            printf("Game draw !!\t\n");

            return 0;
        }
    }

    return 0;
}