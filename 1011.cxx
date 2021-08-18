#include <iostream>
using namespace std;
int main(){
    int radius;
    double volume;
    cin >> radius;
    //volume = 4 / 3 * pi(3.14159) * radius ^ 3
    volume = 4 / 3.0 * 3.14159 * radius * radius * radius;
    printf("VOLUME = %.3f\n", volume);
    return 0;
}