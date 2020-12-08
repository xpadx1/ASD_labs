#include <stdio.h>
#include <stdbool.h>
#define M 9
#define N 8

int matrix[M][N] = {
        { -2, 1, 4, 7, 10, 13, 15, 1 },
        { -2, 1, 4, 7, 10, 13, 16, 1 },
        { -2, 1, 4, 7, 10, 13, 16, 1 },
        { -1, 2, 5, 8, 10, 14, 17, 2 },
        { -1, 2, 5, 8, 11, 14, 17, 2 },
        { -1, 2, 5, 8, 12, 14, 17, 2 },
        {  -1, 3, 6, 9, 12, 15, 18, 2 },
        {  -1, 3, 6, 9, 12, 15, 18, 2 },
        {  -1, 3, 6, 9, 12, 15, 18, 2 } };



int main(void)
{
    for (int R = 0; R < M; R++) {
        for (int C = 0; C < N; C++) {
            printf("%d ", matrix[R][C]);
        }
        printf("\n");
    }
    int column = 0;
    bool flag = true;
    while (column < N)
    {
        int low = 0;
        int high = M;
        while (low <= high)
        {
            int mid = (high + low) / 2;

            if (matrix[mid][column] <= 5 && matrix[mid][column] >= 0)
            {
                printf("\nYour number on coord [%d, %d]\n", mid, column);
                flag = false;
                break;
            }
            else if (matrix[mid][column] > 5)
            {
                high = mid - 1;
            }
            else if (matrix[mid][column] < 0)
            {
                low = mid + 1;
            }
        }
        column++;
    }
    return 0;
}