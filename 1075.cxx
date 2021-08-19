#include <iostream>
using namespace std;
int main(){
    int number;
    cin >> number;
    for (int i = 0; i <= 10000; i++)
    {
        if(i % number == 2){
            cout << i << endl;
        }
    }
    return 0;    
}