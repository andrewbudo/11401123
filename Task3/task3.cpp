#include <stdio.h>
#include <math.h>
int main(void) {
double a, b, Cleg;
if (scanf("%lf %lf %lf", &a, &b, &Cleg) != 3) {
return 1; }
const double PI = acos(-1.0);
double Crad = Cleg* PI / 180.0;
double S = 0.5*a*b*sin(Crad);
double c = sqrt(a*a +b*b - 2.0 * a*b* cos(Crad));
double L = a+b+c;
double h = (2.0 * S)/ a;
printf("%.8lf %.8lf %.8lf\n ", S, L, h);
return 0;
}
