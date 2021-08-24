#include <bits/stdc++.h>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    int number;
    int count = 0;
    for(int i = 1; i <= testCase; i++){
        cin >> number;
        for (int i = 2; i < number; i++)
        {
            if(number % i == 0){
                count += 1;
            }
        }
        if(count == 0){
            cout << number << " eh primo" << endl;
        }
        else {
            cout << number << " nao eh primo" << endl;
        }
        count = 0;
    }
    return 0;
}