#include <iostream>
using namespace std;
int main(){
     int testCase;
     cin >> testCase;
     int numArray[testCase];
     int count = 0;
     for (int i = 0; i < testCase; i++){
         cin >> numArray[i];
         if(numArray[i] >= 10 && numArray[i] <=20){
             count++;
         }
     }
    cout << count << " in" << endl;
    cout << testCase - count << " out" << endl;
    return 0;     
}