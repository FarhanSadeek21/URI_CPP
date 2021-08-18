#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float total, note, coin;
    cin >> total;
    note = floor(total);
    coin = (int) (total - note) * 100;
    cout << note << coin;
    return 0;
}