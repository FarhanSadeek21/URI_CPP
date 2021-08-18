#include <iostream>
using namespace std;
int main(){
    float number;
    cin >> number;
    if(number < 0 || number > 100){
        cout << "Fora de intervalo";
    }
    else if(number >= 0 && number <= 25){
        cout << "Intervalo [0,25]";
    }
    else if(number <= 50){
        cout << "Intervalo (25,50]";
    }
    else if(number <= 75){
        cout << "Intervalo (50,75]";
    }
    else if(number <= 100){
        cout << "Intervalo (75,100]";
    }
    cout << endl;
    return 0;
}