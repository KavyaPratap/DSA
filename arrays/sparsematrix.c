#include <stdio.h>
#include <stdlib.h>

int main() {
    int row, col, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &row, &col);

    int arr[row][col];
    int nze = 0; 

    printf("Enter matrix elements:\n");
    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0) {
                nze++;
            }
        }
    }


    int sparse[nze][3];
    int k = 0; 

    for(i = 0; i < row; i++) {
        for(j = 0; j < col; j++) {
            if (arr[i][j] != 0) {
                sparse[k][0] = i;    
                sparse[k][1] = j;      
                sparse[k][2] = arr[i][j];  
                k++;
            }
        }
    }

    printf("\nSparse Matrix Representation (Row, Column, Value):\n");
    for(i = 0; i < nze; i++) {
        printf("%d\t%d\t%d\n", sparse[i][0], sparse[i][1], sparse[i][2]);
    }

    return 0;
}
