#include <iostream>
using namespace std;
int main(){
    int number, result;
    cin >> number;
    for(int i = 1; i <= 10; i += 1){
        result = i * number;
        printf("%i x %i = %i\n", i, number, result);
    }
    return 0;
}