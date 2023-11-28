#include <stdio.h>
#include <stdlib.h>

// Allocate Array
int *allocatearray(int n){
    int *p;
    // Allocate the memory for an array of integers with size n
    p = (int *) malloc(n*sizeof(int));
    return p;   // Return a pointer to the allocated memory
}

// Fill with ones
void fillwithones(int *array, int n){
    int i;
    // Fill the array with ones
    for(i=0; i<n; i++){
        array[i]=1;
    }
}

// Print the array
void printarray(int *array, int n){
    int i;
    // Print the elements of the array along with their indices
    for(i=0; i<n; i++){
        printf("a[%d]: %d\n", i, array[i]);
    }
}

// Deallocate the array
void freearray(int *array){
    // Free the memory allocated
    free(array);
}

int main(){
    int n, *a;
    printf("Size of the array:\n");
    scanf("%d", &n);

    a = allocatearray(n);   // Allocate memory for the array
    fillwithones(a, n);     // Fill the array with ones
    printarray(a, n);   
    freearray(a);       // Deallocate the memory used by the array

    a = NULL;

    return 0;
}




