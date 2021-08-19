#include <iostream>
using namespace std;
int main(){
    int testCase
    double num1, num2, num3, average;
    cin >> testCase;
    for(int i = 1; i <= testCase; i++){
        cin >> num1 >> num2 >> num3;
        average = ((num1 * 2 ) + (num2 * 3) + (num3 * 5)) / (2 + 3 + 5);
        printf("%.1f\n", average);
    }
    return 0;
}