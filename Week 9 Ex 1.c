#include <stdio.h>

int main() {
  int row, col, a[50][50], b[50][50], sum[50][50], i, j;

  printf("Number of rows: ");
  scanf("%d", &row);

  printf("Number of columns: ");
  scanf("%d", &col);

  printf("\nMatrix 1 -- Enter elements:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("Element a%d%d: ", i + 1, j + 1);
      scanf("%d", &a[i][j]);
    }

  printf("Matrix 2 -- Enter elements:\n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("Element b%d%d: ", i + 1, j + 1);
      scanf("%d", &b[i][j]);
    }

  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }

  printf("\nSum: \n");
  for (i = 0; i < row; ++i)
    for (j = 0; j < col; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == col - 1) { 
        printf("\n\n");
      }
    }

  return 0;
}
