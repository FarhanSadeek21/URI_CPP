#include <iostream>
using namespace std;
int main() {
    double number, sum = 0;
    for (int i = 1; i <= 100; i++)
    {
        number = 1 / (double) i;
        sum += number;
    }
    printf("%.2lf\n", sum);
    return 0;
}