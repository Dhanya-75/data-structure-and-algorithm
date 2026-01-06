#include <stdio.h>
int N;
int board[20][20];   // supports up to 20 queens
// Check if queen can be placed safely
int isSafe(int row, int col) 
{
    int i, j;
    // Check left side of the row
    for (i = 0; i < col; i++)
    {
        if (board[row][i])
        {
            return 0;
        }
    }
    // Check upper-left diagonal
    for (i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j])
        {
            return 0;
        }
            
    }
    // Check lower-left diagonal
    for (i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if (board[i][j])
        {
            return 0;
        }
    }
    return 1;
}
// Backtracking function
int solveNQueen(int col)
{
    if (col >= N)
    {
        return 1;   // all queens placed
    }
    for (int i = 0; i < N; i++) 
    {
        if (isSafe(i, col)) 
        {
            board[i][col] = 1;
            if (solveNQueen(col + 1))
            {
                return 1;
            }
            board[i][col] = 0;   // BACKTRACK
        }
    }
    return 0;
}
// Print the chessboard
void printBoard() 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++)
            printf("%d ", board[i][j]);
        printf("\n");
    }
}
int main() 
{
    printf("Enter number of queens: ");
    scanf("%d", &N);
    if (solveNQueen(0))
        printBoard();
    else
        printf("No solution exists");
    return 0;
}
