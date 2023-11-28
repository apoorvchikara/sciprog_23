#include<stdio.h>

// integer function to return the greatest common divisor 
int gcd_iteration(int a,int b)
{
    // initialise temp
	int temp;
	while (b!=0)
	{
		temp=b;	// store b value in temp variable
		b=a%b;	// store the quotient of the division to b
		a=temp; // store the temp value to a variable
	}
	return a;	// return the divisor
}

// function to return the greatest common divisor using recursion
int gcd_recursive(int a, int b)
{
    
	if (b==0)	// if b is 0, return a
	{
		return a;
	}

    // if b is not equal to 0. recursively call the function with b and a % b
		return gcd_recursive(b,a%b);
}

void main()
{
    // customised user input.
	int a,b;
	printf("Please enter a positive integer a :\n");
	scanf("%d",&a);

	if(a<=0)
	{
	printf("Input is not positive, aborting");
	}

	printf("Please enter a positive integer b :\n");
	scanf("%d",&b);
	
	if(b<=0)
	{
	printf("This integer is not positive, aborting");
	}

    // calling the recursive function.
	int recursion=gcd_recursive(a,b);


    // calling the iterative function.
	int Iteration=gcd_iteration(a,b);

    // Print the results
	printf("Iteration result : %d\n",Iteration);
	printf("Recursion result : %d\n",recursion);
}	
