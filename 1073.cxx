#include <iostream>
using namespace std;
int main(){
    int number, square;
    cin >> number;
    if(number % 2 != 0){
        number -= 1;
    }
    for (int i = 2; i <= number; i += 2){
        square = i * i;
        printf("%i^2 = %i\n", i, square);
    }
    return 0;
}