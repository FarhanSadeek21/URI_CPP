#include <iostream>
using namespace std;
int main(){
    int numArray[100], max = -99999, position;
    for (int i = 0; i < 100; i++){
        cin >> numArray[i];
        if(max < numArray[i]){
            max = numArray[i];
            position = i + 1;
        }
    }
    cout << max << endl << position << endl;
    return 0;
}