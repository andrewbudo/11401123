#include <stdio.h>
#include <math.h> 
int main() {
    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 1.0;
    double y2 = 1.0;
    double deltaX = x2 - x1;
    double deltaY = y2 - y1;
    double distance = sqrt(pow(deltaX, 2) + pow(deltaY, 2));
    printf("%.8f\n",  distance);
    return 0;
}
