#include <iostream>
using namespace std;
int main(){
    int distance;
    float fuel, consumption;
    cin >> distance >> fuel;
    consumption = distance / fuel;
    printf("%.3f km/l\n", consumption);
    return 0;
}