#include <stdio.h>
#include <math.h>
int main(void) {
double x1, y1, x2, y2;
if (scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2) != 4) return 0;
double dx= x1- x2;
double dy= y1- y2;
double dist = sqrt(dx*dx + dy*dy);
printf("%.8f\n", dist);
return 0;
}
