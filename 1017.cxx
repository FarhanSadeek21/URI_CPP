#include <iostream>
using namespace std;
int main(){
    int time, speed;
    double consumption;
    cin >> time >> speed;
    consumption = (12.0 * speed) / time;
    printf("%.3lf\n", consumption);
    return 0;
}