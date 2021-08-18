#include <iostream>
#include <cstring>
using namespace std;
int main(){
    string input, necessary;
    cin >> input >> necessary;
    if(necessary.find(input) != string::npos){
        cout << "go" << endl;
    }
    else{
        cout << "no" << endl;
    }
    return 0;
}