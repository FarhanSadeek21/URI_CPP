#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int x = 0, sum = 0;
    int lower, higher, i;
    int n1, n2;
    while (x == 0){
        cin >> n1 >> n2;
        if(n1 == 0 || n2 == 0){
            break;
        }
        higher = max(n1, n2);
        lower = min(n1, n2);
        for (i = lower; i <= higher; i++)
        {
            cout << i << " ";
            sum += i;
        }
        cout << "Sum=" << sum << endl;
        sum = 0;
    }
    return 0;
}