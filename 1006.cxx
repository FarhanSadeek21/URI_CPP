#include <iostream>
using namespace std;
int main(){
    double a, b, c, average;
    cin >> a >> b >> c;
    average = (a * 2 + b * 3 + c * 5) / (2 + 3 + 5);
    printf("MEDIA = %.1f\n", average);
    return 0;
}