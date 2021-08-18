#include <iostream>
using namespace std;
int main() {
    int time;
    cin >> time;
    int year = time / 365;
    cout << year << " ano(s)" << endl;
    int month = (time % 365) / 30;
    cout << month << " mes(es)" << endl;
    int days = (time % 365) % 30;
    cout << days << " dia(s)" << endl;
    return 0;
}