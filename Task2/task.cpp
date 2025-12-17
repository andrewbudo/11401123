#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
 long double x1, x2, y1, y2, res,sq1,sq2,k1,k2;
 cin>>x1>>x2>>y1>>y2;
 k1=x1-y1;
 k2=x2-y2;
 sq1=k1*k1;
 sq2=k2*k2;
 res=sqrt(sq1+sq2);
 cout << res;
    
    return 0;
}
