#include <stdio.h>
#include <stdlib.h>
#include "dk_tool.h"

int main() {
    int i, j;
    int row=0, col=0;
    while(col < 2 && row < 2) { //перевірка на розмір масиву, мінімум дозволить зробити або одномірний горизонтальний, або "вектор-стовпець"
      printf("Number of columns in matrices:");
        scanf("%d", &col);
      printf("Number of rows in matrices:");
        scanf("%d", &row);
      }

    int **arr1 = getMatrix(row, col);//виклик матриць
    int **arr2 = getMatrix(row, col);

    int **resarr = sumMatr(arr1, arr2, row, col); //виклик функції суми
    
    delete_matrix(arr2, row);//чистимо матрицю

    printMatrix(resarr, row, col);//вивід матриці
    
    delete_matrix(resarr, row);//чистимо матрицю
}
