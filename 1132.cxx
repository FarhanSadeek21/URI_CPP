#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n1, n2, sum = 0;
    cin >> n1 >> n2;
    int higher = max(n1, n2);
    int lower = min(n1, n2);
    for(int i = lower; i <= higher; i++){
        if(i % 13 != 0){
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}