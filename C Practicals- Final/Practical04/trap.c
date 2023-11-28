#include<stdio.h>
#include<math.h>
// initialise the variables
int N=12;
double TanValues[13];

double degtorad(double deg);
double traprule(int N);


int main() {

    int i;
    double deg, rad;
    // itterate for N times.
    for(i=0;i<=N;i++){
        deg = 5.0*i;    // Calculating the angle in degrees (incrementing by 5 each time)
        rad = degtorad(deg);    // Convert the angle from degrees to radians using the function degtorad
        TanValues[i] = tan(rad);    // Calculate and store the tangent value for the angle in the array TanValues   
    }

    double integral_approx = traprule(N);
    double integral_exact = log(2.0);

    printf("The approximation of the integral from x=0 degrees to x=60 degrees of the function tan(x) ith respect to x is :\n %.5f\nThe exact soultion is :\n%.5f\n", integral_approx, integral_exact);

}

double degtorad(double deg){
    return (deg * M_PI)/180.0;  // Convert degrees to radians using the formula (degrees * pi / 180)
}

double traprule(int N){
    int i;
    double width, area = TanValues[0] + TanValues[N]; // Initialize area with the sum of the first and last values.
    for(i=1; i<N; i++){
        area = area + 2.0*TanValues[i]; // Calculate the sum of the doubled values.
    }
    // Calculate the width of each interval in radians.
    width = degtorad((60.0 - 0)/(2.0*N));
    area = width * area;    // Finalize the area

    return area;        // Return the area under the curve
}