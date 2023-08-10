#include <iostream>
#include <cmath>
using namespace std;

int main(){
    //四則演算
    printf("%d\n", 869+120);
    printf("%d\n", 869-120);
    printf("%d\n", 869*120);
    printf("%d\n", 869/120);

    //剰余 (mod)
    printf("%d\n", 8%5);
    printf("%d\n", 869%120);

    //絶対値 (abs)
    printf("%d\n", abs(-45));
    printf("%d\n", abs(15));

    //累乗 (pow)
    printf("%d\n", (int)pow(10.0, 2.0));
    printf("%d\n", (int)pow(3.0,4.0));

    //ルート (sqrt)
    printf("%.5lf\n", sqrt(4.0));
    printf("%.5lf\n", sqrt(2.0));
    return 0;
}