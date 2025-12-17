#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
  int a, b, C;
  cin >> a >> b >> C;

  double angle_rad = C * M_PI / 180.0;
  double S = 0.5 * a * b * sin(angle_rad);
  double c = sqrt(a * a + b * b - 2 * a * b * cos(angle_rad));
  double L = a + b + c;
  double h = (2 * S) / a;
  cout << fixed << setprecision(9) << S << " " << L << " " << h << endl;
  return 0;
}
