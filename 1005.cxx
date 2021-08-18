#include <iostream>
using namespace std;
int main(){
    double a, b, average;
    cin >> a >> b;
    average = (a * 3.5 + b * 7.5) / (3.5 + 7.5);
    printf("MEDIA = %0.5f\n", average);
    return 0;
}