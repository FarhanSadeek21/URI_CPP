#include <iostream>
#include <cstring>
using namespace std;
string oddEven(int number){
    if(number % 2 != 0){
        return "ODD";
    }
    else {
        return "EVEN";
    }

}
int main(){
    int testCase, number;
    string output;
    cin >> testCase;
    for(int i = 1; i <= testCase; i++){
        cin >> number;
        if(number == 0){
            cout << "NULL" << endl;
        }
        else if(number < 0){
            //number = (-1) * number;
            number *= -1;
            output = oddEven(number);
            cout << output << " NEGATIVE" << endl;
        }
        else if(number > 0){
            output = oddEven(number);
            cout << output << " POSITIVE" << endl;
        }
    }
    return 0;
}