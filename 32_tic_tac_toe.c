#include <stdio.h>
#include <stdbool.h>

bool check_for_full_grid(int grid[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (grid[i][j] == 0)
            {
                return false;
            }
        }
    }
    return true;
}

void print_grid(int grid[3][3])
{
    for (size_t i = 0; i < 3; i++)
    {
        for (size_t j = 0; j < 3; j++)
        {
            if (grid[i][j] == 0)
            {
                printf("  ");
            }
            else if (grid[i][j] == 1)
            {
                printf("X ");
            }
            else if (grid[i][j] == 2)
            {
                printf("O ");
            }
            if (j < 2)
            {
                printf("| ");
            }
        }
        if (i < 2)
        {
            printf("\n——+———+——\n");
        }
        else
        {
            printf("\n");
        }
    }
}

void get_coordinates(int grid[3][3], int coordinates[2])
{
    printf("Enter coordinates: ");
    scanf("%d %d", &coordinates[0], &coordinates[1]);

    while (
        coordinates[0] > 2 ||
        coordinates[1] > 2 || 
        grid[coordinates[0]][coordinates[1]] != 0
    )
    {
        printf("This field is already taken. Enter new coordinates: ");
        scanf("%d %d", &coordinates[0], &coordinates[1]);
    }
    
}

bool check_for_winning_grid(int grid[3][3])
{
    // check for horizontal win
    for (size_t i = 0; i < 3; i++)
    {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][0] != 0)
        {
            return true;
        }
    }

    // check for vertical win
    for (size_t i = 0; i < 3; i++)
    {
        if (grid[0][i] == grid[1][i] && grid[1][i] == grid[2][i] && grid[0][i] != 0)
        {
            return true;
        }
    }

    // check for diagonal win
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[0][0] != 0)
    {
        return true;
    }
    if (grid[0][2] == grid[1][1] && grid[1][1] == grid[2][0] && grid[0][2] != 0)
    {
        return true;
    }

    return false;
}

char switch_player(int player)
{
    if (player == 'X')
    {
        return 'O';
    }
    else
    {
        return 'X';
    }
}

int main(int argc, char const *argv[])
{

    int grid[3][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    // 0 = empty; 1 = X; 2 = O

    char player = 'X';

    while (!check_for_full_grid(grid))
    {
        printf("%c's turn\n", player);
        print_grid(grid);
        int coordinates[2];
        get_coordinates(grid, coordinates);
        grid[coordinates[0]][coordinates[1]] = player == 'X' ? 1 : 2;
        if (check_for_winning_grid(grid))
        {
            printf("%c wins!\n", player);
            return 0;
        }
        player = switch_player(player);
    }

    printf("Tie!\n");

    return 0;
}
