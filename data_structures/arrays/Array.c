#include <stdio.h>

int main(){

    // 1. Declaration of an array of integers
    int arr[5]; // This array can hold 5 integer values


    // 2. Initialization of an array
    int marks[5] = {10, 20, 50, 40, 30}; // This initializes the array with specific values


    // 3. Accessing array elements
    printf("First student's mark: %d\n", marks[0]); // Output: 10
    printf("Fourth student's mark: %d\n", marks[3]); // Output: 40


    // 4. Updating an element in the array
    marks[0] = 15; // Change the first student's mark to 15
    printf("Updated first student's mark: %d\n", marks[0]); // Output: 15


    // 5. Traversing the array
    printf("All students marks:\n");
    for (int i=0; i< 5; i++) {
        printf("Student %d: %d marks\n", i+1, marks[i]);
    }


    // 6. Finding the size of the array
    int size = sizeof(marks) / sizeof(marks[0]);  // Size of the array
    printf("Size of the array: %d\n", size); // Output: 5
    

    // 7. Searching for an element
    int searchValue = 30;
    int foundIndex = -1;

    for (int i = 0; i<size; i++) {
        if (marks[i] == searchValue) {
            foundIndex = i; // Store the index if the element is found
            break;
        }
    }
    
    if  (foundIndex != -1) {
        printf("Value %d found at index: %d\n", searchValue, foundIndex); // Output: Value 30 found at index: 2
    } else {
        printf("Value %d not found in the array.\n", searchValue);
    }


    // 8. Sorting the Array
    // Bubble sort to sort the array in ascending order
    for (int i = 0 ; i  < size - 1 ; i++ ) {
        for (int j = 0 ; j< size - i - 1; j++) {
        if (marks[j] > marks[j + 1]) {
                // Swap the elements
                int temp = marks[j];
                marks[j] = marks[j + 1];
                marks[j + 1] = temp;
            }
        }
    }
    // Display the sorted array
    printf("Sorted marks:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", marks[i]);
    }
    printf("\n");


    // 9. Multi-Dimensional Arrays
    // Declaration and initialization of a 2D array
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements in a 2D array
    printf("Element at row 1, column 2: %d\n", matrix[1][2]); // Output: 6


    









    return 0;
}