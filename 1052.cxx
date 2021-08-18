#include <iostream>
#include <cstring>
using namespace std;
int main(){
    int monthCount;
    string monthArray[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    cin >> monthCount;
    cout << monthArray[monthCount - 1] << endl;
    return 0;
}