#include <stdio.h>

#define M 9
#define N 8

int matrix[M][N] = {
        {  22, 19, 16, 12, 9, 6, 3, 0 },
        {  22, 19, 16, 12, 9, 7, 3, 0 },
        {  23, 20, 17, 13, 10, 7, 4, 1 },
        {  23, 20, 17, 14, 10, 8, 4, 1 },
        {  24, 21, 18, 14, 11, 8, 5, 2 },
        {  24, 21, 18, 15, 11, 9, 5, 2 },
        {  25, 22, 19, 15, 12, 9, 6, 3 },
        {  25, 22, 19, 16, 13, 10, 6, 3 },
        {  26, 23, 20, 16, 13, 10, 7, 4 } };
        
            
 int main(void)
{
    int column = 0;
    printf("Searching for cock\n");

    while (column < N)
    {
        int low = 0;
        int high = M;
        while (low <= high)
        {
            int mid = (high + low) / 2;
            
            if (matrix[mid][column] <= 5 && matrix[mid][column] >= 0)
            {


                    
                    printf("Your number on coord [%d, %d]\n", column, mid);
                    break;
                
            }
            else
            {
                low = mid + 1;
            }
        }
        column++;
    }
    return 0;
}
