#include <stdio.h>
#include <math.h> 

int main() {
double x1=0;
double y1=0;
double x2=1;
double y2=1;
double distance; 
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("%.8f\n", distance);

    return 0; 
}
