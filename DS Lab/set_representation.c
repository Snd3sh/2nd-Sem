//program to perform set operations on matrices 

#include <stdio.h> 

   #define ROWS 2  // Number of rows in the matrix 

  #define COLS 2  // Number of columns in the matrix 



  void inputMatrix(int matrix[ROWS][COLS]) { 

      printf("Enter elements of the matrix (%d x %d):\n", ROWS, COLS); 

      for (int i = 0; i < ROWS; i++) { 

          for (int j = 0; j < COLS; j++) { 

              scanf("%d", &matrix[i][j]); 

          } 

      } 

  } 



  void displayMatrix(int matrix[ROWS][COLS]) { 

      for (int i = 0; i < ROWS; i++) { 

          for (int j = 0; j < COLS; j++) { 

              printf("%d ", matrix[i][j]); 

          } 

          printf("\n"); 

      } 

  } 



  void joinMatrix(int matrixA[ROWS][COLS], int matrixB[ROWS][COLS], int resultMatrix[ROWS][COLS]) { 

      for (int i = 0; i < ROWS; i++) { 

          for (int j = 0; j < COLS; j++) { 

              resultMatrix[i][j] = matrixA[i][j] | matrixB[i][j];  // Boolean OR operation 

          } 

      } 

  } 



  void meetMatrix(int matrixA[ROWS][COLS], int matrixB[ROWS][COLS], int resultMatrix[ROWS][COLS]) { 

      for (int i = 0; i < ROWS; i++) { 

          for (int j = 0; j < COLS; j++) { 

              resultMatrix[i][j] = matrixA[i][j] & matrixB[i][j];  // Boolean AND operation 

          } 

      } 

  } 



  void dotProductMatrix(int matrixA[ROWS][COLS], int matrixB[ROWS][COLS], int resultMatrix[ROWS][COLS]) { 

      for (int i = 0; i < ROWS; i++) { 

          for (int j = 0; j < COLS; j++) { 

              resultMatrix[i][j] = 0; 

              for (int k = 0; k < COLS; k++) { 

                  resultMatrix[i][j] |= (matrixA[i][k] & matrixB[k][j]);  // Boolean AND followed by OR 

              } 

          } 

      } 

  } 



  int main() { 

      int matrixA[ROWS][COLS]; 

      int matrixB[ROWS][COLS]; 

      int resultMatrix[ROWS][COLS]; 



      printf("Enter elements of Matrix A  :\n"); 
      
   print("☆*: .｡. o(≧▽≦)o .｡.:*☆:\n"); 
      inputMatrix(matrixA); 



      printf("Enter elements of Matrix B:\n"); 

      inputMatrix(matrixB); 



      printf("\nMatrix A:\n"); 

      displayMatrix(matrixA); 



      printf("Matrix B:\n"); 

      displayMatrix(matrixB); 



      // Join (Union) of Matrix A and B 

      joinMatrix(matrixA, matrixB, resultMatrix); 

      printf("\nJoin (Union) of Matrix A and Matrix B:\n"); 

      displayMatrix(resultMatrix); 



      // Meet (Intersection) of Matrix A and B 

      meetMatrix(matrixA, matrixB, resultMatrix); 

      printf("Meet (Intersection) of Matrix A and Matrix B:\n"); 

      displayMatrix(resultMatrix); 



      // Dot Product of Matrix A and B 

      dotProductMatrix(matrixA, matrixB, resultMatrix); 

      printf("Dot Product of Matrix A and Matrix B:\n"); 

      displayMatrix(resultMatrix); 



      return 0; 
