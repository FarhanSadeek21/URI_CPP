#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string number;
    cin >> number;
    if(number.find("13") != string::npos){
        cout << number << " es de Mala Suerte" << endl;
    }
    else{
        cout << number << " NO es de Mala Suerte" << endl;
    }
    return 0;
}