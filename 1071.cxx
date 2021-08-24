#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n1, n2, higher, lower;
    int sum = 0;
    cin >> n1 >> n2;
    higher = max(n1, n2) - 1;
    lower = min(n1, n2) + 1;
    cout << higher << " " << lower << endl;
    for(int i = lower; i <= higher; i++) {
        if(i % 2 == 1 || i % 2 == -1){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}