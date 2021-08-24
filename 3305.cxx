#include <iostream>
using namespace std;
int main(){
    int testCase;
    cin >> testCase;
    int horizantal[testCase];
    int vertal[testCase];
    int count = 0;
    for(int i = 0; i < testCase; i++){
        cin >> horizantal[i];
        cin >> vertal[i];
        if(horizantal[i] != vertal[i]){
            count += 1;
        }
    }
    cout << count << endl;
    return 0;
}