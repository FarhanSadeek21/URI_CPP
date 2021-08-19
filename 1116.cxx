#include <iostream>
using namespace std;
int main(){
    float testCase, a, b, result;
    cin >> testCase;
    for (int i = 0; i < testCase; i += 1)
    {
        cin >> a >> b;
        if(b == 0){
            cout << "divisao impossivel" << endl;
        }
        else {
            result = a / b;
            printf("%.1f\n", result);
        }
    }
    return 0;
}