#include <stdio.h>
int main(void) {
long long a, b;
if (scanf("%lld %lld ", &a, &b) != 2) {
return 1; }
long long product = a*b;
long long doubled_sum=2* (a+b);
printf("%lld %lld\n", product, doubled_sum);
return 0;
}
