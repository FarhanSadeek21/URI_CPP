#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int num, square, cube;
    cin >> num;
    for (int i = 1; i <= num; i += 1){
        square = i * i;
        cube = square * i;
        cout << i << " " << square << " " << cube << endl;
    }
    return 0;
}