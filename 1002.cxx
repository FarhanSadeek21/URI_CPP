#include <iostream>
using namespace std;
int main(){
    double radius, area;
    cin >> radius;
    // Area of circle = pi(3.14159) * r ^ 2
    // radius ^ 2 = radius * radius
    area = 3.14159 * radius * radius;
    printf("A=%.4f\n", area);
    return 0;
}