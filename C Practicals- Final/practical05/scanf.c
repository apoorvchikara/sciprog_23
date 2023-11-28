#include <stdio.h>

int main(void) {
    int i, ierr;
    double a;

    // Enter information from user
    printf("Enter an int and double\n");
    
    // Read an integer and a double from the user
    scanf("%d %lf",&i,&a);

    // Check the number of successfully read items
    ierr = scanf("%d %lf", &i, &a);

    // If the number of successfully read items is not 2, print an error message
    if(ierr!=2) printf("Problem with input");

    return 0;
}
