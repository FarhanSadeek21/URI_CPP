/* https://codereview.stackexchange.com/questions/26100/maximum-of-three-values-in-c */
#include <iostream>
using namespace std;
int main(){
    int num1, num2, num3, highest;
    cin >> num1 >> num2 >> num3;
    highest = num1;
    highest = max(highest, num2);
    highest = max(highest, num3);
    cout << highest << " eh o maior" << endl;
    return 0;
}