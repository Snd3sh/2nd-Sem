//Program to find union and intersection of two sets using computer representation of sets. 

#include <stdio.h> 
#define MAX_ELEMENTS 6  // Universal set has elements {0, 1, 2, 3, 4, 5} 


void inputSetBinary(int set[]) { 

    int n, element; 

    printf("Enter the number of elements in the set: "); 

    scanf("%d", &n); 

    printf("Enter %d elements: ", n); 

    for (int i = 0; i < n; i++) { 

        scanf("%d", &element); 

        if (element >= 0 && element < MAX_ELEMENTS) { 

            set[element] = 1;  // Set the corresponding position to 1 

        } 

    } 

} 
void displaySetBinary(int set[]) { 

    for (int i = 0; i < MAX_ELEMENTS; i++) { 

        printf("%d", set[i]); 

    } 

    printf("\n"); 

} 

  

void unionSetBinary(int setA[], int setB[], int resultSet[]) { 

    for (int i = 0; i < MAX_ELEMENTS; i++) { 

        resultSet[i] = setA[i] | setB[i];  // Binary OR operation 

    } 

} 

  

void intersectionSetBinary(int setA[], int setB[], int resultSet[]) { 

    for (int i = 0; i < MAX_ELEMENTS; i++) { 

        resultSet[i] = setA[i] & setB[i];  // Binary AND operation 

    } 

} 

  

int main() {                                                   

    int setA[MAX_ELEMENTS] = {0};  // Initialize all elements to 0 

    int setB[MAX_ELEMENTS] = {0};  // Initialize all elements to 0 

    int resultSet[MAX_ELEMENTS] = {0};  // Initialize all elements to 0 

    printf("Enter elements of Set A (Binary Representation):\n"); 

    inputSetBinary(setA); 

  

    printf("Enter elements of Set B (Binary Representation):\n"); 

    inputSetBinary(setB); 

  

    printf("\nSet A: ");

    displaySetBinary(setA); 

  

    printf("Set B: "); 

    displaySetBinary(setB); 

  

    // Union 
    
    unionSetBinary(setA, setB, resultSet); 

    printf("\nUnion of Set A and Set B: "); 

    displaySetBinary(resultSet); 

  

    // Intersection 

    intersectionSetBinary(setA, setB, resultSet); 

    printf("Intersection of Set A and Set B: "); 

    displaySetBinary(resultSet); 
    return 0;
    }
    